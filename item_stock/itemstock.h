#ifndef ITEMSTOCK_H
#define ITEMSTOCK_H

#include <QMainWindow>
#include <QtSql>
#include <QtDebug>
#include <qfileinfo>

QT_BEGIN_NAMESPACE
namespace Ui { class ItemStock; }
QT_END_NAMESPACE

class ItemStock : public QMainWindow
{
    Q_OBJECT

public:
    ItemStock(QWidget *parent = nullptr);
    ~ItemStock();

private slots:
    void on_pushButtonLogin_clicked();

private:
    Ui::ItemStock *ui;
    QSqlDatabase mydb;
};
#endif // ITEMSTOCK_H
