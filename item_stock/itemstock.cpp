#include "itemstock.h"
#include "ui_itemstock.h"

ItemStock::ItemStock(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::ItemStock)
{
    ui->setupUi(this);

    mydb = QSqlDatabase::addDatabase("QSQLITE");
       mydb.setDatabaseName("C:/Users/Vendy S.P/OneDrive - Bina Nusantara University/Tutorial/Qt Creator Project/TR_CPAD_smt5/item_stock_database.db");

       if(mydb.open())
           ui->labelStatus->setText("Connected to database");
       else
           ui->labelStatus->setText("Failed to open the database");
}

ItemStock::~ItemStock()
{
    delete ui;
}


void ItemStock::on_pushButtonLogin_clicked()
{
    QString itemcode, password;
    itemcode = ui->lineEditItemCode->text();
    password = ui->lineEditPassword->text();

    if(!mydb.isOpen()){
        qDebug()<<"Failed to open the database";
        return;
    }
    QSqlQuery qry;

    if(qry.exec("select * from item_stock where code='"+itemcode+"' and password='"+password+"'"))
    {
        int count = 0;
        while(qry.next())
        {
            count++;
        }
        if(count==1)
            ui->labelStatus->setText("Username and password is correct");
        if(count>1)
            ui->labelStatus->setText("Duplicate username and password");
        if(count<1)
            ui->labelStatus->setText("Username and password is incorrect");
    }
}

