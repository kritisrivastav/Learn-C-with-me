#include "account.h"
#include <iostream>

void Account::display()
{
    std::cout<<"I am an account"<<std::endl;
}

void Savings::display()
{
   std::cout<<"I am a savings account"<<std::endl;
}

void Checking::display()
{
    std::cout<<"I am a checking account"<<std::endl;
}

void Trust::display()
{
    std::cout<<"I am a trust account"<<std::endl;
}

Account::~Account()
{
    std::cout<<"Account destrcutor called"<<std::endl;
}

Savings::~Savings()
{
    std::cout<<"Savings destrcutor called"<<std::endl;
}

Checking::~Checking()
{
    std::cout<<"Checking destrcutor called"<<std::endl;
}

Trust::~Trust()
{
    std::cout<<"Trust destrcutor called"<<std::endl;
}

