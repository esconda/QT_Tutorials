#-------------------------------------------------
#
# Project created by QtCreator 2019-04-08T09:27:41
#
#-------------------------------------------------

QT       += core gui quickwidgets qml

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Qmlexample1
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

CONFIG += c++11

SOURCES += \
        main.cpp \
        mainwindow.cpp

HEADERS += \
        mainwindow.h

FORMS += \
        mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

INCLUDEPATH += C:\opencvQT\build\include

LIBS += C:\opencvQT\new_build\bin\libopencv_core341.dll
LIBS += C:\opencvQT\new_build\bin\libopencv_highgui341.dll
LIBS += C:\opencvQT\new_build\bin\libopencv_imgcodecs341.dll
LIBS += C:\opencvQT\new_build\bin\libopencv_imgproc341.dll
LIBS += C:\opencvQT\new_build\bin\libopencv_features2d341.dll
LIBS += C:\opencvQT\new_build\bin\libopencv_calib3d341.dll
LIBS += C:\opencvQT\new_build\bin\libopencv_videoio341.dll
LIBS += C:\opencvQT\new_build\bin\libopencv_video341.dll

RESOURCES += \
    resource.qrc
