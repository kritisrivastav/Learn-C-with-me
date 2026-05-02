#include "overridebase.h"
#include <iostream>

OverrideBase::~OverrideBase() {

    std::cout<<"Base class destroyed"<<std::endl;
}

OverrideDerived::~OverrideDerived() {

    std::cout<<"Derived class destroyed"<<std::endl;
}

void OverrideBase::say_hello() const {

    std::cout<<"Base class called"<<std::endl;
}


void OverrideDerived::say_hello() const {

    std::cout<<"Derived class called"<<std::endl;
}
