#include "FunctionObject.h"


FunctionObject::FunctionObject() {}

int FunctionObject::operator()(int a, int b) const
{
    return a + b;
}


