#include "Shallowcopy.h"
#include <cstring>


ShallowCopy::ShallowCopy(const char* name)
{
    this->name = new char[strlen(name) + 1];//a pointer to a dynamically allocated character array
    //Here name is a variable on stack pointing to a read only memory segment when "kriti" is passed to it through an object
    //again, strlen works in a way that name is the initial address.It starts from there and ends when it finds a terminating character.
    //now this->name is a variable on stack pointing to a heap address

}
ShallowCopy::ShallowCopy(const ShallowCopy& obj):name(obj.name) {}


void ShallowCopy::display_name()
{
    std::cout<<"Name is :"<<"\t"<<this->name;
}

ShallowCopy::~ShallowCopy()
{
    delete[] name;
}
