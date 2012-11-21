#-------------------------------------------------
#
# Project created by QtCreator 2012-11-20T14:05:02
#
#-------------------------------------------------
TARGET = SankoreAPI
TEMPLATE = lib
CONFIG += staticlib
VERSION = 1.0
DEFINES += SANKOREAPI_LIBRARY

QT       += core gui network svg webkit xml xmlpatterns phonon multimedia testlib

BUILD_DIR = build
macx:BUILD_DIR = $$BUILD_DIR/macx
win32:BUILD_DIR = $$BUILD_DIR/win32
linux-g++*:BUILD_DIR = $$BUILD_DIR/linux

CONFIG(debug, debug|release):BUILD_DIR = $$BUILD_DIR/debug
CONFIG(release, debug|release) {
   BUILD_DIR = $$BUILD_DIR/release
}
DESTDIR = $$BUILD_DIR/product
OBJECTS_DIR = $$BUILD_DIR/objects
MOC_DIR = $$BUILD_DIR/moc
RCC_DIR = $$BUILD_DIR/rcc
UI_DIR = $$BUILD_DIR/ui

# 3rd party static libraries
THIRDPARTY_PATH = $$PWD/../Sankore-ThirdParty
QUAZIP_BASEPATH = $$THIRDPARTY_PATH/quazip
QUAZIP_PATH = $$QUAZIP_BASEPATH/lib
macx:QUAZIP_PATH = $$QUAZIP_PATH/macx
win32:QUAZIP_PATH = $$QUAZIP_PATH/win32
linug-g++*:QUAZIP_PATH = $$QUAZIP_PATH/linux
LIBS += -L$$QUAZIP_PATH -lquazip
INCLUDEPATH += $$QUAZIP_BASEPATH/quazip-0.3

# Subprojects
ABSTRACT_PATH = $$PWD/abstract
CUSTOMWIDGETS_PATH = $$PWD/customWidgets
DEVTOOLS_PATH = $$PWD/devtools
FRAMEWORKS_PATH = $$PWD/frameworks
GLOBALS_PATH = $$PWD/globals
INTERFACES_PATH = $$PWD/interfaces

include($$ABSTRACT_PATH/abstract.pri)
include($$CUSTOMWIDGETS_PATH/customWidgets.pri)
include($$DEVTOOLS_PATH/devtools.pri)
include($$FRAMEWORKS_PATH/frameworks.pri)
include($$GLOBALS_PATH/globals.pri)
include($$INTERFACES_PATH/interfaces.pri)

INCLUDEPATH += $$ABSTRACT_PATH/
INCLUDEPATH += $$CUSTOMWIDGETS_PATH/
INCLUDEPATH += $$DEVTOOLS_PATH/
INCLUDEPATH += $$FRAMEWORKS_PATH/
INCLUDEPATH += $$GLOBALS_PATH/
INCLUDEPATH += $$INTERFACES_PATH/

HEADERS += SankoreAPI_global.h

SOURCES += \
    main.cpp
