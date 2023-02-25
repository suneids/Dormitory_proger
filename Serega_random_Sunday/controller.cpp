#include "controller.h"
#include <QFileInfo>
#include <QFileDialog>
#include <QPushButton>
#include <iostream>
void Controller::ValidatePath(){
    QString path = QFileDialog::getOpenFileName(NULL, "Title", ".", "*.txt");
    QFileInfo check_file = QFileInfo(path);
    if(check_file.exists() && check_file.isFile())
        emit SuccesPathValidation(path);
    else{
        QString error_message = "Error: Invalid file";
        emit SendErrorMessage(error_message);
    }
}

void Controller::ValidateCounts(int students, QMap<QString, int> counts){
    int selected = 0;
    for(QString key: counts.keys()){
        selected += counts[key];
    }
    if(selected != students){
        QString message = "Выбранное неккоректное число студентов";
        emit SendErrorMessage(message);
    }
    else{
        emit SendCountsToRandomize(students, counts);
    }
}
