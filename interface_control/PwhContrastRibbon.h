#ifndef PWHCONTRASTRIBBON_H
#define PWHCONTRASTRIBBON_H
#include "Ribbon.h"

class PwhContrastRibbon : public Ribbon
{
    Q_OBJECT
signals:
    void add_first_table_clicked();
    void add_second_table_clicked();
    void add_third_table_clicked();
    void clear_first_table_clicked();
    void clear_second_table_clicked();
    void clear_third_table_clicked();
public:
    PwhContrastRibbon(QWidget* parent = nullptr);
    RibbonTool* add_first_table, * add_second_table, * add_third_table;
    RibbonTool* clear_first_table, * clear_second_table, * clear_third_table;
private:
    void init();
};

#endif // PWHCONTRASTRIBBON_H
