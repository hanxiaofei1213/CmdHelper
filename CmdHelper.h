#ifndef CMDHELPER_H
#define CMDHELPER_H

#include <QDialog>

QT_BEGIN_NAMESPACE
namespace Ui {
class CmdHelper;
}
QT_END_NAMESPACE

class CmdHelper : public QDialog
{
    Q_OBJECT

public:
    CmdHelper(QWidget *parent = nullptr);
    ~CmdHelper();

private:
    Ui::CmdHelper *ui;
};
#endif // CMDHELPER_H
