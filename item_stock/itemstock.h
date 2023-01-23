#ifndef ITEMSTOCK_H
#define ITEMSTOCK_H

#include <QMainWindow>
#include <QtSql>
#include <QtDebug>
#include <qfileinfo>
#include <itemmodify.h>

QT_BEGIN_NAMESPACE
namespace Ui { class ItemStock; }
QT_END_NAMESPACE

class ItemStock : public QMainWindow
{
    Q_OBJECT

public:
    QSqlDatabase mydb;

    void connClose()
    {
        mydb.close();
        mydb.removeDatabase(QSqlDatabase::defaultConnection);
    }

    bool connOpen()
    {
        mydb = QSqlDatabase::addDatabase("QSQLITE");
           mydb.setDatabaseName("C:/Users/Vendy S.P/OneDrive - Bina Nusantara University/Tutorial/Qt Creator Project/TR_CPAD_smt5/item_stock_database.db");

           if(mydb.open()){
               qDebug()<<("Connected to database");
               return true;
           }
           else{
               qDebug()<<("Failed to open the database");
               return false;
           }
    }

public:
    ItemStock(QWidget *parent = nullptr);
    ~ItemStock();

private slots:
    void on_pushButtonLogin_clicked();

private:
    Ui::ItemStock *ui;
};
#endif // ITEMSTOCK_H
