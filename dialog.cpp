#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::setValor(const bool &newValor)
{
    m_valor = newValor;
}

bool Dialog::valor()
{
    return m_valor;
}

/*void Dialog::on_buttonBox_accepted()
{
    m_valor = true;
}


void Dialog::on_buttonBox_rejected()
{
    m_valor = false;
}*/

