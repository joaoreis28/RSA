#include "utils.h"


utils::utils()
{

}

utils::~utils()
{}

int utils::ExpBin(int a, int exp, int mod)
{
    if(exp == 0)
        return 1;
    if(exp & 1)
         return (a * ExpBin(a, exp - 1, mod)) % mod;
    int b = ExpBin(a, exp/2, mod);
    return  (b * b) % mod;
}


int utils::Euclid(int a, int b, int &x, int &y)
{
    if( b == 0)
    {
        x = 1;
        y = 0;
        return a;
    }
    int d = Euclid(b, a % b, x, y);
    int _x = x;
    x = y;
    y = _x - y * (a / b);
    return d;
}