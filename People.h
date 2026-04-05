#ifndef PEOPLE_H
#define PEOPLE_H
#include <Person.h>
#include <vector>
#include <algorithm>
class People
{
    std::vector<Person> people;
    int max_people;
public:
    People(int max = 10);

    People(const People& p) = default;//will revisit this

    void add(std::string, int);

    void set_max_people(int);

    int get_max_people() const;

    std::vector<Person> get_people(int);


};

#endif // PEOPLE_H
