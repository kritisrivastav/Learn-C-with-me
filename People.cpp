#include "People.h"


People::People(int max):max_people(max){}

void People::add(std::string name, int age){
    people.emplace_back(name, age);
}

void People::set_max_people(int max)
{
    max_people = max;
}

int People::get_max_people() const{
    return max_people;
}

std::vector<Person> People::get_people(int max_age)
{
    std::vector<Person> result;
    int count{0};
    std::copy_if(people.begin(), people.end(), std::back_inserter(result),[this, &count, max_age](const Person& p)
                 {return p.getAge() > max_age && ++count <= max_people;});

    return result;
}
