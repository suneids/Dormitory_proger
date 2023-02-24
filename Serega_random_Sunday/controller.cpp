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
        emit FailedValidation(error_message);
    }
}

