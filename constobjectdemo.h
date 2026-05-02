#ifndef CONSTOBJECTDEMO_H
#define CONSTOBJECTDEMO_H
#include <iostream>
class ConstObjectDemo
{

private:

    std::string name;
    std::string health;

public:
    ConstObjectDemo(std::string, std::string);

    ConstObjectDemo(const ConstObjectDemo&);

    std::string get_name();

    std::string get_health() const;

    void set_name(const ConstObjectDemo&);

    static void display_details(const ConstObjectDemo&);
};

#endif // CONSTOBJECTDEMO_H
