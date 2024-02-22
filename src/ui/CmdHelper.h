#pragma once
#include <QMainWindow>
#include "ui_CmdHelper.h"

class CmdHelper : public QMainWindow {
    Q_OBJECT

public:
    CmdHelper(QWidget* parent = nullptr);
    ~CmdHelper();

private:
    Ui::CmdHelper ui;
};
