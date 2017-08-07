#include "PwhContrastMain.h"
#include "ui_pwhcontrastmain.h"
#include <memory>
#include "Pwh/PwhContrast.h"
#include <QMdiSubWindow>
#include "interface_control/PwhContrastRibbon.h"
#include <QDebug>

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

void PwhContrastMain::addFirstTable()
{
    qDebug() << "addFirstTable";
    auto w = activeWindow();
    if(w == nullptr)
    {
        return;
    }

    w->on_add_clicked();
}

void PwhContrastMain::addSecondTable()
{
    qDebug() << "addSecondTable";
}

void PwhContrastMain::addThirdTable()
{
    qDebug() << "addThirdTable";
}

void PwhContrastMain::clearFirstTable()
{
    qDebug() << "clearFirstTable";
}

void PwhContrastMain::clearSecondTable()
{
    qDebug() << "clearSecondTable";

}

void PwhContrastMain::clearThirdTable()
{
    qDebug() << "clearThirdTable";
}

void PwhContrastMain::initConn()
{
    connect(ui->rib, &PwhContrastRibbon::fileNew, this, &PwhContrastMain::fileNew);
    connect(ui->rib, &PwhContrastRibbon::add_first_table_clicked, this, &PwhContrastMain::addFirstTable);
    connect(ui->rib, &PwhContrastRibbon::add_second_table_clicked, this, &PwhContrastMain::addSecondTable);
    connect(ui->rib, &PwhContrastRibbon::add_third_table_clicked, this, &PwhContrastMain::addThirdTable);
    connect(ui->rib, &PwhContrastRibbon::clear_first_table_clicked, this, &PwhContrastMain::clearFirstTable);
    connect(ui->rib, &PwhContrastRibbon::clear_second_table_clicked, this, &PwhContrastMain::clearSecondTable);
    connect(ui->rib, &PwhContrastRibbon::clear_third_table_clicked, this, &PwhContrastMain::clearThirdTable);

}

not_null<PwhContrast *> PwhContrastMain::createWindow()
{
    auto pwh_win = make_unique<PwhContrast> ();
    pwh_win->setAttribute(Qt::WA_DeleteOnClose);
    auto w = ui->mdi->addSubWindow (pwh_win.get());

    w->setWindowState(Qt::WindowMaximized);
    return pwh_win.release();
}

PwhContrast *PwhContrastMain::activeWindow()
{
    if(QMdiSubWindow* active_window = ui->mdi->activeSubWindow())
    {
        PwhContrast* w = dynamic_cast<PwhContrast*>(active_window->widget());
        return w;
    }
    else
    {
        return nullptr;
    }

}
