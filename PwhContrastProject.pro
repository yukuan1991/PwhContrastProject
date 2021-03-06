#-------------------------------------------------
#
# Project created by QtCreator 2017-08-07T10:21:34
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets
CONFIG -= c++11
QMAKE_CXXFLAGS += -std=c++1z

TARGET = PwhContrastProject
TEMPLATE = app

DEFINES += PRODUCT_PATH=\\\"./product\\\"

# The following define makes your compiler emit warnings if you use
# any feature of Qt which as been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += main.cc\
        PwhContrastMain.cc \
    interface_control/Ribbon.cc \
    Pwh/PwhContrast.cc \
    Qt-Utils/des.cpp \
    Qt-Utils/encryption.cpp \
    Qt-Utils/tinyxml2.cpp \
    Pwh/production_management_button_tree_dlg.cpp \
    Model/json_model.cpp \
    Model/product_info_model.cpp \
    Model/product_structure_model.cpp \
    data_veryfication.cpp \
    interface_control/PwhContrastRibbon.cc

HEADERS  += PwhContrastMain.h \
    interface_control/Ribbon.h \
    Pwh/PwhContrast.h \
    Qt-Utils/des.h \
    Qt-Utils/encryption.h \
    Qt-Utils/json.hpp \
    Qt-Utils/krys_application.hpp \
    Qt-Utils/qt.hpp \
    Qt-Utils/stl_extension.hpp \
    Qt-Utils/tinyxml2.h \
    Pwh/production_management_button_tree_dlg.h \
    Model/json_model.h \
    Model/product_info_model.h \
    Model/product_structure_model.h \
    data_veryfication.h \
    interface_control/PwhContrastRibbon.h

FORMS    += pwhcontrastmain.ui \
    Pwh/pwhcontrast.ui \
    Pwh/production_management_button_tree_dlg.ui

LIBS += -lboost_filesystem
LIBS += -lboost_system
