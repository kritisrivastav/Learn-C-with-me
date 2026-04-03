#include "functionpointers.h"

FunctionPointers::FunctionPointers(int val1, int val2){
    this->val1 = val1;
    this->val2 = val2;
}

int FunctionPointers::add()
{
    return this->val1 + this->val2;
}

int FunctionPointers::substract(int x, int y)
{
    return x - y;
}
