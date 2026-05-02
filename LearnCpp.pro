TEMPLATE = app
CONFIG += console c++17
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        FunctionObject.cpp \
        Multiplier.cpp \
        Passwordvalidator.cpp \
        People.cpp \
        Person.cpp \
        Player.cpp \
        Shallowcopy.cpp \
        account.cpp \
        compiletimepoly.cpp \
        constobjectdemo.cpp \
        deepcopy.cpp \
        functionpointers.cpp \
        main.cpp \
        overridebase.cpp \
        utility.cpp

HEADERS += \
    FunctionObject.h \
    Multiplier.h \
    Passwordvalidator.h \
    People.h \
    Person.h \
    Player.h \
    Shallowcopy.h \
    account.h \
    compiletimepoly.h \
    constobjectdemo.h \
    deepcopy.h \
    functionpointers.h \
    overridebase.h \
    utility.h
