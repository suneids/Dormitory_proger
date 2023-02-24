﻿#include "model.h"
#include "view.h"
#include "controller.h"
#include <QApplication>
#include <QObject>
#include <QPushButton>
#include <iostream>
void ConnectSignalsAndSlots(Model *model, View *view, Controller *controller);


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Model model;
    View view;
    Controller controller;
    ConnectSignalsAndSlots(&model, &view, &controller);
    view.Init();


    return a.exec();
}


void ConnectSignalsAndSlots(Model *model, View *view, Controller *controller){
    QObject::connect(&(view->input_button), SIGNAL(released()), controller, SLOT(ValidatePath()));
    QObject::connect(controller, SIGNAL(SuccesPathValidation(QString)), model, SLOT(ReadFile(QString)));
    QObject::connect(model, SIGNAL(SendData(QStandardItemModel *, QStandardItemModel *, QStandardItemModel *)),
                     view, SLOT(Refresh(QStandardItemModel *, QStandardItemModel *, QStandardItemModel *)));
    QObject::connect(&view->add_uncursed, SIGNAL(released()), view, SLOT(SendSelectedToAdd()));
    QObject::connect(&view->remove_uncursed, SIGNAL(released()), view, SLOT(SendSelectedToRemove()));

    QObject::connect(view, SIGNAL(SendToAdd(int)), model, SLOT(AddToUncursed(int)));
    QObject::connect(view, SIGNAL(SendToRemove(int)), model, SLOT(RemoveFromUncursed(int)));
}
