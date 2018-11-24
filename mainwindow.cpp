#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "globals.h"
#include "frm_addrisk.h"

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::MainWindow) {
    ui->setupUi(this);

    statusBar()->showMessage("Connected to RMA Database. Connected as User: "+currentUser);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_actionExit_triggered() {
    QApplication::exit(0);
}

void MainWindow::on_actionAdd_Risk_triggered() {
    frm_AddRisk *newRisk = new frm_AddRisk();
    newRisk->exec();
}
