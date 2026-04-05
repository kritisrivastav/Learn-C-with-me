#ifndef PERSON_H
#define PERSON_H

#include <iostream>
#include<string>

class Person
{

private:
    std::string name;
    int age;
public:
    Person(std::string, int);

    Person(const Person& p);
    //using compilers destrcutor
    //use custom destrcutors when your class has Raw pointers / file handles / sockets
    ~Person() = default;

    std::string get_name() const { return name;};

    void setName(std::string);

    void setAge(int);

    int getAge() const;

    friend std::ostream& operator << (std::ostream& os, const Person& rhs);

    auto change_person1(){return [this](std::string new_name, int new_age){ name = new_name, new_age = age;};}
    //it implicitly captures this pointer
    auto change_person2(){return [=](std::string new_name, int new_age){name = new_name, new_age = age;};}

    auto change_person3(){return [&](std::string new_name, int new_age){name = new_name, new_age = age;};}
};

#endif // PERSON_H
