#include "itemmodify.h"
#include "ui_itemmodify.h"

ItemModify::ItemModify(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ItemModify)
{
    ui->setupUi(this);
}

ItemModify::~ItemModify()
{
    delete ui;
}
