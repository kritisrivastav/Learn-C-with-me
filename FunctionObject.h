#ifndef FUNCTIONOBJECT_H
#define FUNCTIONOBJECT_H


class FunctionObject
{
public:
    FunctionObject();

    int operator()(int, int) const;

};

#endif // FUNCTIONOBJECT_H
