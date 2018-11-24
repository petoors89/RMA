#ifndef FRM_ADDRISK_H
#define FRM_ADDRISK_H

#include <QDialog>

namespace Ui {
class frm_AddRisk;
}

class frm_AddRisk : public QDialog
{
    Q_OBJECT

public:
    explicit frm_AddRisk(QWidget *parent = nullptr);
    ~frm_AddRisk();

private:
    Ui::frm_AddRisk *ui;
};

#endif // FRM_ADDRISK_H
