#ifndef CONTROLLER_H
#define CONTROLLER_H
#include <QObject>
#include <QMap>

class Controller:public QObject{
    Q_OBJECT

public slots:
    void ValidatePath();
    void ValidateCounts(int, QMap<QString, int>);

public:
    Controller(){

    }
    ~Controller(){

    }

signals:
    void SuccesPathValidation(QString path);
    void SendErrorMessage(QString message);
    void SendCountsToRandomize(int, QMap<QString, int>);


};
#endif
