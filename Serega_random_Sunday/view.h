#ifndef VIEW_H
#define VIEW_H
#include <QPushButton>
#include <QTableView>
#include <QObject>
#include <QStandardItemModel>
#include <QBoxLayout>
#include <QLabel>
#include <QLineEdit>

class View:public QObject{
    Q_OBJECT

public slots:
    void Refresh(QStandardItemModel *students_model, QStandardItemModel *students_uncursed_model, QStandardItemModel *students_by_roles_model);
    void ShowMessage(QString message);

    void SendSelectedToAdd();
    void SendSelectedToRemove();

signals:
    void SendToAdd(int);
    void SendToRemove(int);


public:
    View(){}
    void Init();
    void Clear();
    ~View(){

    }

    QPushButton input_button, randomize_button, clear_button, add_uncursed,
                remove_uncursed;

private:
    QLabel students_label, students_uncursed_label, students_by_roles_label,
           kitchen_label, smoke_label, hallway_label, street_label,
           floor1_label, block_label, stairs_label, pass_label, cabin_label;

    QLineEdit students_input, students_uncursed_input, students_by_roles_input,
              kitchen_input, smoke_input, hallway_input, street_input,
              floor1_input, block_input, stairs_input, pass_input, cabin_input;

    QTableView students, students_uncursed, students_by_roles;

    QBoxLayout students_layout = QBoxLayout(QBoxLayout::TopToBottom),
               controls_uncursed = QBoxLayout(QBoxLayout::TopToBottom),
               students_uncursed_layout = QBoxLayout(QBoxLayout::TopToBottom),
               students_by_roles_layout = QBoxLayout(QBoxLayout::TopToBottom),
               tables_layout = QBoxLayout(QBoxLayout::LeftToRight),
               counters_by_roles_layout = QBoxLayout(QBoxLayout::LeftToRight),
               controls_layout = QBoxLayout(QBoxLayout::LeftToRight),
               main_layout = QBoxLayout(QBoxLayout::TopToBottom);

    QWidget main_window;

};

#endif
