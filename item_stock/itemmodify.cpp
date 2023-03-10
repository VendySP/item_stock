#include "itemmodify.h"
#include "ui_itemmodify.h"
#include <QMessageBox>

ItemModify::ItemModify(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ItemModify)
{
    ui->setupUi(this);
    ItemStock conn;
    if(conn.connOpen())
        ui->labelStatus->setText("Connected to database");
    else
        ui->labelStatus->setText("Failed to open the database");

}

ItemModify::~ItemModify()
{
    delete ui;
}

void ItemModify::on_pushButtonAdd_clicked()
{
    ItemStock conn;
    QString name, code, category, stock, price;
    name = ui->lineEditName->text();
    code = ui->lineEditCode->text();
    category = ui->lineEditCategory->text();
    stock = ui->lineEditStock->text();
    price = ui->lineEditPrice->text();

    if(!conn.connOpen()){
        qDebug()<<"Failed to open the database";
        return;
    }

    conn.connOpen();
    QSqlQuery qry;
    qry.prepare("insert into item_stock (name, code, category, stock, price) values ('"+name+"','"+code+"','"+category+"','"+stock+"','"+price+"')");

    if(qry.exec())
    {
        QMessageBox::information(this,tr("Add"), tr("Added"));
        conn.connClose();
    }
    else
    {
        QMessageBox::critical(this,tr("error::"), qry.lastError().text());
    }
}


void ItemModify::on_pushButtonUpdate_clicked()
{
    ItemStock conn;
    QString name, code, category, stock, price;
    name = ui->lineEditName->text();
    code = ui->lineEditCode->text();
    category = ui->lineEditCategory->text();
    stock = ui->lineEditStock->text();
    price = ui->lineEditPrice->text();

    if(!conn.connOpen()){
        qDebug()<<"Failed to open the database";
        return;
    }

    conn.connOpen();
    QSqlQuery qry;
    qry.prepare("update item_stock set name='"+name+"',code='"+code+"',stock='"+stock+"',price='"+price+"' where code='"+code+"'");

    if(qry.exec())
    {
        QMessageBox::information(this,tr("Update"), tr("Updated"));
        conn.connClose();
    }
    else
    {
        QMessageBox::critical(this,tr("error::"), qry.lastError().text());
    }
}


void ItemModify::on_pushButtonDelete_clicked()
{
    ItemStock conn;
    QString name, code, password, category, stock, price;
    name = ui->lineEditName->text();
    code = ui->lineEditCode->text();
    category = ui->lineEditCategory->text();
    stock = ui->lineEditStock->text();
    price = ui->lineEditPrice->text();

    if(!conn.connOpen()){
        qDebug()<<"Failed to open the database";
        return;
    }

    conn.connOpen();
    QSqlQuery qry;
    qry.prepare("delete from item_stock where code='"+code+"'");

    if(qry.exec())
    {
        QMessageBox::information(this,tr("Delete"), tr("Deleted"));
        conn.connClose();
    }
    else
    {
        QMessageBox::critical(this,tr("error::"), qry.lastError().text());
    }
}

