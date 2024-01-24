#include <iostream>
#include "RSA.h"
typedef long long ll;


int main()
{
    RSA rsa(3, 5, 11);

    char in;
    cin >> in;


    ll out = rsa.encrypt(in);
    cout << int(in) << endl;
    cout << out << endl;
}