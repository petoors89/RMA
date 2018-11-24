#include <QApplication>
#include <QHostInfo>
#include <QByteArray>
#include <stdlib.h>
#include "mainwindow.h"
#include "globals.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    currentUser = QString::fromLocal8Bit(qgetenv("USERNAME"));
    currentHostame = QHostInfo::localHostName();

    QSqlDatabase db = QSqlDatabase::addDatabase("QODBC3");
    db.setDatabaseName("Driver={Microsoft Access Driver (*.mdb, *.accdb)};DBQ="+databasePath+";PWD="+databasePassword+"");

    int i = 0;

    if(db.open()) {
        QSqlQuery query(db);
        query.prepare("INSERT INTO tbl_LoggingInfo (LogTimeStamp,LogUser,LogHostname,LogDescr) VALUES ('"+QString::number(QDateTime::currentMSecsSinceEpoch())+"','"+currentUser+"','"+currentHostame+"','Logged in');");
        query.exec();
        MainWindow w;
        w.show();
        i = a.exec();
    }
    else {
        qDebug() << db.lastError();
        QMessageBox errorMsg;
        errorMsg.setWindowTitle("Connection Error");
        errorMsg.setIcon(QMessageBox::Critical);
        errorMsg.setText("Error connecting to RMA Database. Error message: "+db.lastError().text()+". Contact you administrator.");
        errorMsg.exec();
        i = 1;
    }

    return i;
}
