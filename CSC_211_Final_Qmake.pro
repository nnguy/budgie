QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    grainbudget.cpp \
    graindiscount.cpp \
    grainwindow.cpp \
    main.cpp \
    home.cpp \
    meatbudget.cpp \
    meatdiscount.cpp \
    meatwindow.cpp \
    vegbudget.cpp \
    vegdiscount.cpp \
    vegwindow.cpp \
    advisor.cpp \
    recipe.cpp \
    ingredient.cpp

HEADERS += \
    grainbudget.h \
    graindiscount.h \
    grainwindow.h \
    home.h \
    meatbudget.h \
    meatdiscount.h \
    meatwindow.h \
    vegbudget.h \
    vegdiscount.h \
    vegwindow.h \
    advisor.h \
    recipe.h \
    ingredient.h

FORMS += \
    grainbudget.ui \
    graindiscount.ui \
    grainwindow.ui \
    home.ui \
    meatbudget.ui \
    meatdiscount.ui \
    meatwindow.ui \
    vegbudget.ui \
    vegdiscount.ui \
    vegwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
