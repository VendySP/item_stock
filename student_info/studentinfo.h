#ifndef STUDENTINFO_H
#define STUDENTINFO_H

#include <QMainWindow>
#include <QtSql>
#include <QtDebug>
#include <qfileinfo>

QT_BEGIN_NAMESPACE
namespace Ui { class StudentInfo; }
QT_END_NAMESPACE

class StudentInfo : public QMainWindow
{
    Q_OBJECT

public:
    StudentInfo(QWidget *parent = nullptr);
    ~StudentInfo();

private slots:
    void on_pushButtonLogin_clicked();

private:
    Ui::StudentInfo *ui;
    QSqlDatabase mydb;
};
#endif // STUDENTINFO_H
