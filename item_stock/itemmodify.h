#ifndef ITEMMODIFY_H
#define ITEMMODIFY_H

#include <QDialog>
#include "itemstock.h"

namespace Ui {
class ItemModify;
}

class ItemModify : public QDialog
{
    Q_OBJECT

public:
    explicit ItemModify(QWidget *parent = nullptr);
    ~ItemModify();

private slots:
    void on_pushButtonAdd_clicked();

    void on_pushButtonUpdate_clicked();

    void on_pushButtonDelete_clicked();


private:
    Ui::ItemModify *ui;
};

#endif // ITEMMODIFY_H
