#include "Person.h"

Person::Person(std::string name, int age):name(name),age(age) {}

Person::Person(const Person& p)
{
    name = p.name;
    age = p.age;
}

int Person::getAge() const
{
    return age;
}

void Person::setAge(int age)
{
    this->age = age;
}

void Person::setName(std::string name)
{
    this->name = name;
}

std::ostream& operator << (std::ostream& os, const Person& rhs)
{
    os << "{Person:" << rhs.name <<":" <<rhs.age<< "}";
    return os;
}

