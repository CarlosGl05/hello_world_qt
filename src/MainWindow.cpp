#include "MainWindow.h"
#include <QPushButton>
#include <QVBoxLayout>
#include <QMessageBox>
#include <QLabel>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    setWindowTitle("ejemplo 2");
    resize(300, 150);

    QWidget *central = new QWidget(this);
    setCentralWidget(central);

    QVBoxLayout *vbox = new QVBoxLayout;

    QLabel *label = new QLabel("Presiona el botón para ver el mensaje", this);
    vbox->addWidget(label);

    QPushButton *button = new QPushButton("Mostrar mensaje", this);
    vbox->addWidget(button);

    QPushButton *button2 = new QPushButton("Mostrar mensaje 2", this);
    vbox->addWidget(button2);

    connect(button, &QPushButton::clicked, this, &MainWindow::on_buttonClicked);
    connect(button2, &QPushButton::clicked, this, &MainWindow::on_button2Clicked);

    central->setLayout(vbox);
}

MainWindow::~MainWindow()
{
}

void MainWindow::on_buttonClicked()
{
    QMessageBox::information(this, "Mensaje", "loba");
}

void MainWindow::on_button2Clicked()
{
    QMessageBox::information(this, "Mensaje", "loba 2");
}