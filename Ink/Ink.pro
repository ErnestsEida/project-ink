QT       += core gui widgets

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11 console

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    colorbutton.cpp \
    editor.cpp \
    elkfile.cpp \
    globals.cpp \
    imageconverter.cpp \
    imageimport.cpp \
    inversesensetivitycontrols.cpp \
    main.cpp \
    menu.cpp \
    newimage.cpp \
    options.cpp \
    optionsmanager.cpp \
    quiplashdialog.cpp \
    quiplashmodule.cpp \
    recentimages.cpp \
    scribblearea.cpp \
    templates.cpp

HEADERS += \
    colorbutton.h \
    editor.h \
    elkfile.h \
    globals.h \
    imageconverter.h \
    imageimport.h \
    inversesensetivitycontrols.h \
    menu.h \
    newimage.h \
    options.h \
    optionsmanager.h \
    quiplashdialog.h \
    quiplashmodule.h \
    recentimages.h \
    scribblearea.h \
    templates.h

FORMS += \
    editor.ui \
    imageimport.ui \
    inversesensetivitycontrols.ui \
    menu.ui \
    newimage.ui \
    options.ui \
    quiplashdialog.ui \
    templates.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    ../images/templates/templates.qrc
