#include "constobjectdemo.h"


ConstObjectDemo::ConstObjectDemo(std::string name, std::string health):name(name),health(health){}


ConstObjectDemo::ConstObjectDemo(const ConstObjectDemo& obj)
{
    this->name = obj.name;
    this->health = obj.health;
}
std::string ConstObjectDemo::get_name()
{
    return name;
}

std::string ConstObjectDemo::get_health() const
{
    //name = "Kriti"; Not allowed to do this
    return health;
}
void ConstObjectDemo::set_name(const ConstObjectDemo& obj)
{
    this->name = obj.name;
    this->health = obj.health;
}

void ConstObjectDemo::display_details(const ConstObjectDemo& obj)
{
   // std::cout<<"Name:"<<"\t"<<obj.get_name();
    //std::cout<<"Health:"<<"\t"<<obj.get_health(); Wont be allowed to do this
}

