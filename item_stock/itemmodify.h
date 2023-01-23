#ifndef ITEMMODIFY_H
#define ITEMMODIFY_H

#include <QDialog>

namespace Ui {
class ItemModify;
}

class ItemModify : public QDialog
{
    Q_OBJECT

public:
    explicit ItemModify(QWidget *parent = nullptr);
    ~ItemModify();

private:
    Ui::ItemModify *ui;
};

#endif // ITEMMODIFY_H
