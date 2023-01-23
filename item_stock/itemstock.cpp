#include "itemstock.h"
#include "ui_itemstock.h"

ItemStock::ItemStock(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::ItemStock)
{
    ui->setupUi(this);

    if(connOpen())
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
    QString username, password;
    username = ui->lineEditUsername->text();
    password = ui->lineEditPassword->text();

    if(!connOpen()){
        qDebug()<<"Failed to open the database";
        return;
    }

    connOpen();
    QSqlQuery qry;
    qry.prepare("select * from login_info where username='"+username+"' and password='"+password+"'");

    if(qry.exec())
    {
        int count = 0;
        while(qry.next())
        {
            count++;
        }
        if(count==1){
            ui->labelStatus->setText("Username and password is correct");
            connClose();
//            this->hide();
            ItemModify itemmodify;
            itemmodify.setModal(true);
            itemmodify.exec();
        }
        if(count>1)
            ui->labelStatus->setText("Duplicate Username and password");
        if(count<1)
            ui->labelStatus->setText("Username and password is incorrect");
    }
}


