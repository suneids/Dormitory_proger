#include "model.h"
#include <QFile>
#include <QStandardItem>

void Model::ReadFile(QString path){
    QFile file(path);
    file.open(QIODevice::ReadOnly);
    QStringList headers12 = {"Студент", "Комната"};
    QStringList headers3 = {"Студент", "Комната", "Роль"};
    QStandardItem *item;
    students_model.setHorizontalHeaderLabels(headers12);
    students_uncursed_model.setHorizontalHeaderLabels(headers12);
    students_by_roles_model.setHorizontalHeaderLabels(headers3);
    int row = 0;
    QStringList lines = ParseLines(QString(file.readAll()).simplified());
    for(int i = 0; i < lines.size()-1; i += 2){
        item = new QStandardItem(lines[i]);
        students_model.setItem(row, 1, item);

        item = new QStandardItem(lines[i+1]);
        students_model.setItem(row, 0, item);

        row++;
    }
    file.close();
    emit SendData(&students_model, &students_uncursed_model, &students_by_roles_model);
}


QStringList Model::ParseLines(QString allsymbols){
    QStringList res;
    QString temp = "";
    bool scan_name = 0;
    for(int i = 0; i < allsymbols.size(); i++){
        if(allsymbols[i] != ' '){
            if(temp.size() > 0 && allsymbols[i].isDigit() && !(temp[0] >= '0' && temp[0] <= '9')){
                res.append(temp);
                temp = "";
            }
            temp += allsymbols[i];
            if(allsymbols[i].isLetter()) scan_name = 1;
            else scan_name = 0;
        }
        else if(scan_name)
            temp += allsymbols[i];
        else{
            res.append(temp);
            temp = "";
            scan_name = 0;
        }
    }
    return res;
}


void Model::AddToUncursed(int row){
    if(row > -1){
        QList <QStandardItem*> item = students_model.takeRow(row);
        students_uncursed_model.appendRow(item);
        students_model.removeRows(row, 0);
        emit SendData(&students_model, &students_uncursed_model, &students_by_roles_model);
    }
}


void Model::RemoveFromUncursed(int row){
    if(row > -1){
        QList <QStandardItem*> item = students_uncursed_model.takeRow(row);
        students_model.appendRow(item);
        students_uncursed_model.removeRows(row, 0);
        emit SendData(&students_model, &students_uncursed_model, &students_by_roles_model);
    }
}
