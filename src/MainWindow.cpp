#include "MainWindow.h"
#include <QPushButton>
#include <QVBoxLayout>
#include <QMessageBox>
#include <QLabel>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    setWindowTitle("Solo un botón y mensaje");
    resize(300, 120);

    QWidget *central = new QWidget(this);
    setCentralWidget(central);

    QVBoxLayout *vbox = new QVBoxLayout;

    QLabel *label = new QLabel("Presiona el botón para ver el mensaje", this);
    vbox->addWidget(label);

    QPushButton *button = new QPushButton("Mostrar mensaje", this);
    vbox->addWidget(button);

    connect(button, &QPushButton::clicked, this, &MainWindow::on_buttonClicked);

    central->setLayout(vbox);
}

MainWindow::~MainWindow()
{
}

void MainWindow::on_buttonClicked()
{
    QMessageBox::information(this, "Mensaje", "loba");
}