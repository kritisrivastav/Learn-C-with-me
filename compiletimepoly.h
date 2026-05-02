#ifndef COMPILETIMEPOLY_H
#define COMPILETIMEPOLY_H
#include <iostream>
class CompileTimePoly
{
public:
    void say_hello() const;
};

class Derived: public CompileTimePoly
{
public:
    void say_hello() const;
};

void greetings( CompileTimePoly&);

#endif // COMPILETIMEPOLY_H
