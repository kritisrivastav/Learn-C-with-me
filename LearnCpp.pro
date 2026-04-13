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
        functionpointers.cpp \
        main.cpp \
        utility.cpp

HEADERS += \
    FunctionObject.h \
    Multiplier.h \
    Passwordvalidator.h \
    People.h \
    Person.h \
    functionpointers.h \
    utility.h
