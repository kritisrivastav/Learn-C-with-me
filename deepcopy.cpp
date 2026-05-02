#include "deepcopy.h"

DeepCopy::DeepCopy(int d)
{
    std::cout<<"constructor called with value"<<d<<std::endl;
    data = new int;
    *data = d;
}
DeepCopy::DeepCopy(const DeepCopy& deepCopyObj):DeepCopy{*(deepCopyObj.data)}{}

void DeepCopy::set_data(int num)
{
    *data = num;
}

void DeepCopy::display_data(){
    std::cout<<"Data after deep copy is"<<*data<<std::endl;
}

DeepCopy::~DeepCopy()
{
    delete data;
}
