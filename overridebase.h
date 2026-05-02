#ifndef OVERRIDEBASE_H
#define OVERRIDEBASE_H

class OverrideBase
{
public:
    virtual void say_hello() const;

    virtual ~OverrideBase();
};

class OverrideDerived : public OverrideBase
{
public:
    virtual void say_hello() const override;

    virtual ~OverrideDerived();
};

#endif // OVERRIDEBASE_H
