TEMPLATE = app
CONFIG += console c++17
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        FunctionObject.cpp \
        Multiplier.cpp \
        functionpointers.cpp \
        main.cpp

HEADERS += \
    FunctionObject.h \
    Multiplier.h \
    functionpointers.h
