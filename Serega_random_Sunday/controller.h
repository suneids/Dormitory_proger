#ifndef CONTROLLER_H
#define CONTROLLER_H
#include <QObject>
class Controller:public QObject{
    Q_OBJECT

public slots:
    void ValidatePath();

public:
    Controller(){

    }
    ~Controller(){

    }

signals:
    void SuccesPathValidation(QString path);
    void FailedValidation(QString message);


private:

};
#endif
