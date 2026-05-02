#ifndef SHALLOWCOPY_H
#define SHALLOWCOPY_H
#include <iostream>
class ShallowCopy
{
private:
    char* name;
public:

    ShallowCopy(const char*);
    ShallowCopy(const ShallowCopy&);

    void display_name();
    ~ShallowCopy();
};

#endif // SHALLOWCOPY_H
