#include "compiletimepoly.h"

void CompileTimePoly::say_hello() const {
    std::cout<<"Hi , I am base class"<<"\n";
}

void Derived::say_hello() const {
    std::cout<<"Hi , I am derived class"<<"\n";
}


void greetings(CompileTimePoly& obj)
{
    obj.say_hello();
}
