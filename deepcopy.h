#ifndef DEEPCOPY_H
#define DEEPCOPY_H
#include <iostream>
class DeepCopy
{
    int* data;
public:
    DeepCopy(int);

    DeepCopy(const DeepCopy&);

    void set_data(int);

    void display_data();

    ~DeepCopy();
};

#endif // DEEPCOPY_H
