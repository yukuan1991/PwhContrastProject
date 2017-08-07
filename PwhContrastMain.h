#ifndef PWHCONTRASTMAIN_H
#define PWHCONTRASTMAIN_H

#include <QWidget>
#include <base/lang/not_null.h>

namespace Ui {
class PwhContrastMain;
}

class PwhContrast;
class PwhContrastMain : public QWidget
{
    Q_OBJECT

public:
    explicit PwhContrastMain(QWidget *parent = 0);
    ~PwhContrastMain();

private:
    void fileNew();
private:
    void initConn();
private:
    not_null<PwhContrast*> createWindow();
private:
    Ui::PwhContrastMain *ui;
};

#endif // PWHCONTRASTMAIN_H
