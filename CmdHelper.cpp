#include "CmdHelper.h"
#include "./ui_CmdHelper.h"

CmdHelper::CmdHelper(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::CmdHelper)
{
    ui->setupUi(this);
}

CmdHelper::~CmdHelper()
{
    delete ui;
}
