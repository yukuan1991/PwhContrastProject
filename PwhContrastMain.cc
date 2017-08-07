#include "PwhContrastMain.h"
#include "ui_pwhcontrastmain.h"
#include <memory>
#include "Pwh/PwhContrast.h"
#include <QMdiSubWindow>
#include "interface_control/PwhContrastRibbon.h"

using namespace std;

PwhContrastMain::PwhContrastMain(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::PwhContrastMain)
{
    ui->setupUi(this);
    ui->mdi->setViewMode(QMdiArea::TabbedView);

    initConn();
}

PwhContrastMain::~PwhContrastMain()
{
    delete ui;
}

void PwhContrastMain::fileNew()
{
    createWindow();
}

void PwhContrastMain::initConn()
{
    connect(ui->rib, &PwhContrastRibbon::fileNew, this, &PwhContrastMain::fileNew);
}

not_null<PwhContrast *> PwhContrastMain::createWindow()
{
    auto pwh_win = make_unique<PwhContrast> ();
    pwh_win->setAttribute(Qt::WA_DeleteOnClose);
    auto w = ui->mdi->addSubWindow (pwh_win.get());

    w->setWindowState(Qt::WindowMaximized);
    return pwh_win.release();
}
