##########################################################
# Nombre del ejecutable y configuración de Qt
##########################################################
TEMPLATE = app
TARGET = eje2

QT += core gui widgets
CONFIG += c++17 console

##########################################################
# Indicamos la ruta de include/ (para MainWindow.h, etc.)
##########################################################
INCLUDEPATH += $$PWD/include

##########################################################
# Listado de fuentes y cabeceras de nuestro proyecto
##########################################################
SOURCES += \
    src/main.cpp \
    src/MainWindow.cpp

HEADERS += \
    include/MainWindow.h
