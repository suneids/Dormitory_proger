#ifndef MODEL_H
#define MODEL_H
#include "student.h"
#include <QObject>
#include <QStandardItemModel>
class Model:public QObject{
    Q_OBJECT

public slots:
     void ReadFile(QString path);
     void AddToUncursed(int row);
     void RemoveFromUncursed(int row);
     void Randomize(int, QMap<QString, int>);
signals:
    void SendData(QStandardItemModel *students_model, QStandardItemModel *students_uncursed_model, QStandardItemModel *students_by_roles_model);

public:
    Model(){

    }
    ~Model(){

    }
    QStringList ParseLines(QString allsymbols);
private:


    student *students;
    int students_count = 0, kitchen = 0, smoke = 0, hallway = 0, street = 0, floor1 = 0,
        block = 0, stairs = 0, pass = 0, cabin = 0;

    QStandardItemModel students_model, students_uncursed_model, students_by_roles_model;
};

#endif
