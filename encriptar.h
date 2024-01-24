#pragma once
#include "RSA.h"

using namespace std;


class encriptar
{
private:
    const PublicKey* public_key;
    string text;

public:
    encriptar(const PublicKey* public_key);

    int encriptarChar(char c) const;

};

