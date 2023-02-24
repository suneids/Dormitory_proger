#include "view.h"
#include <QFileDialog>

void View::Init(){
    students_label.setText("Студенты");
    students_label.setAlignment(Qt::AlignHCenter);
    students_layout.addWidget(&students_label), students_layout.addWidget(&students);
    students.setSelectionBehavior(QAbstractItemView::SelectionBehavior::SelectRows);

    add_uncursed.setText("▶"), remove_uncursed.setText("◀");
    add_uncursed.resize(20,20);
    controls_uncursed.addWidget(&add_uncursed), controls_uncursed.addWidget(&remove_uncursed);


    students_uncursed_label.setText("Освобожденные cтуденты");
    students_uncursed_label.setAlignment(Qt::AlignHCenter);
    students_uncursed_layout.addWidget(&students_uncursed_label), students_uncursed_layout.addWidget(&students_uncursed);
    students_uncursed.setSelectionBehavior(QAbstractItemView::SelectionBehavior::SelectRows);

    students_by_roles_label.setText("Распределенные студенты");
    students_by_roles_label.setAlignment(Qt::AlignHCenter);
    students_by_roles_layout.addWidget(&students_by_roles_label), students_by_roles_layout.addWidget(&students_by_roles);
    students_by_roles.setSelectionBehavior(QAbstractItemView::SelectionBehavior::SelectRows);

    tables_layout.addLayout(&students_layout), tables_layout.addLayout(&controls_uncursed), tables_layout.addLayout(&students_uncursed_layout),
    tables_layout.addLayout(&students_by_roles_layout);

    kitchen_label.setText("Кухя"), smoke_label.setText("Курилка"), hallway_label.setText("Коридор"),
    street_label.setText("Улица"), floor1_label.setText("Этаж 1"), block_label.setText("Блок"),
    stairs_label.setText("Лестница"), pass_label.setText("Переход"), cabin_label.setText("Бытовка");

    counters_by_roles_layout.addWidget(&kitchen_label), counters_by_roles_layout.addWidget(&kitchen_input),
    counters_by_roles_layout.addWidget(&smoke_label), counters_by_roles_layout.addWidget(&smoke_input),
    counters_by_roles_layout.addWidget(&hallway_label), counters_by_roles_layout.addWidget(&hallway_input),
    counters_by_roles_layout.addWidget(&street_label), counters_by_roles_layout.addWidget(&street_input),
    counters_by_roles_layout.addWidget(&floor1_label), counters_by_roles_layout.addWidget(&floor1_input),
    counters_by_roles_layout.addWidget(&block_label), counters_by_roles_layout.addWidget(&block_input),
    counters_by_roles_layout.addWidget(&stairs_label), counters_by_roles_layout.addWidget(&stairs_input),
    counters_by_roles_layout.addWidget(&pass_label), counters_by_roles_layout.addWidget(&pass_input),
    counters_by_roles_layout.addWidget(&cabin_label), counters_by_roles_layout.addWidget(&cabin_input);

    input_button.setText("Выбрать файл"), clear_button.setText("Распределить"), randomize_button.setText("Очистить данные");
    controls_layout.addWidget(&input_button), controls_layout.addWidget(&clear_button),
    controls_layout.addWidget(&randomize_button);

    main_layout.addLayout(&tables_layout), main_layout.addLayout(&counters_by_roles_layout),
    main_layout.addLayout(&controls_layout);

    main_window.setLayout(&main_layout);
    main_window.show();
}


void View::Refresh(QStandardItemModel *students_model = NULL, QStandardItemModel *students_uncursed_model = NULL,
                   QStandardItemModel *students_by_roles_model = NULL){

    if(students_model!=NULL) students.setModel(students_model);
    if(students_uncursed_model!=NULL) students_uncursed.setModel(students_uncursed_model);
    if(students_by_roles_model!=NULL) students_by_roles.setModel(students_by_roles_model);

    students.show();
    students_uncursed.show();
    students_by_roles.show();
}


void View::Clear(){

}


void View::ShowMessage(QString message){
    qDebug() << message <<"\n";
}


void View::SendSelectedToAdd(){
    emit SendToAdd(students.selectionModel()->currentIndex().row());
}


void View::SendSelectedToRemove(){
    emit SendToRemove(students_uncursed.selectionModel()->currentIndex().row());
}
