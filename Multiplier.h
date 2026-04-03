#ifndef MULTIPLIER_H
#define MULTIPLIER_H

class Multiplier
{
private:
    int num{};
public:
    Multiplier(int n);

    //This function does not modify the object it is called on.Hence const
    int operator()(int val) const;
};

#endif // MULTIPLIER_H
