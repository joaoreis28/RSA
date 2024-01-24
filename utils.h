#pragma once
#include <iostream>
using namespace std;



class utils
{
private:
    utils();
    ~utils();

public:
    static int ExpBin(int a, int exp, int mod);
    static int Euclid(int a, int b, int &x, int &y);

};