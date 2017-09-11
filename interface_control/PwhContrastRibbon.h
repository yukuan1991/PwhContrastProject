#ifndef PWHCONTRASTRIBBON_H
#define PWHCONTRASTRIBBON_H
#include "Ribbon.h"

class PwhContrastRibbon : public Ribbon
{
    Q_OBJECT
signals:
    void importAnalysisFile();
    void upChart();
    void downChart();
    void exportPDF();
public:
    PwhContrastRibbon(QWidget* parent = nullptr);

    RibbonTool* import_file_;
    RibbonTool* up_chart_;
    RibbonTool* down_chart_;
    RibbonTool* export_pdf_;
private:
    void init();
};

#endif // PWHCONTRASTRIBBON_H
