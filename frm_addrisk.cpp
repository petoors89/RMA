#include "frm_addrisk.h"
#include "ui_frm_addrisk.h"

frm_AddRisk::frm_AddRisk(QWidget *parent) : QDialog(parent), ui(new Ui::frm_AddRisk) {
    ui->setupUi(this);
}

frm_AddRisk::~frm_AddRisk() {
    delete ui;
}
