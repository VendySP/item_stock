#include "studentinfo.h"
#include "ui_studentinfo.h"

StudentInfo::StudentInfo(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::StudentInfo)
{
    ui->setupUi(this);

    mydb = QSqlDatabase::addDatabase("QSQLITE");
       mydb.setDatabaseName("C:/Users/Vendy S.P/OneDrive - Bina Nusantara University/Tutorial/Qt Creator Project/TR_CPAD_smt5/student_database.db");

       if(mydb.open())
           ui->labelStatus->setText("Connected to database");
       else
           ui->labelStatus->setText("Failed to open the database");
}

StudentInfo::~StudentInfo()
{
    delete ui;
}


void StudentInfo::on_pushButtonLogin_clicked()
{
    QString username, password;
    username = ui->lineEditUsername->text();
    password = ui->lineEditPassword->text();

    if(!mydb.isOpen()){
        qDebug()<<"Failed to open the database";
        return;
    }
    QSqlQuery qry;

    if(qry.exec("select * from student_info where username='"+username+"' and password='"+password+"'"))
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

