#include "Multiplier.h"

Multiplier::Multiplier(int n):num(n) {}

int Multiplier::operator()(int val) const
{
    return val * num;
}
