#ifndef ACCOUNT_H
#define ACCOUNT_H

class Account
{
public:
    virtual void display();

    virtual ~Account();
};

class Savings : public Account
{
public:
    void display();

    ~Savings();
};

class Checking : public Account
{
public:
    void display();

    ~Checking();
};

class Trust : public Account
{
public:
    void display();

    ~Trust();
};

#endif // ACCOUNT_H
