#include "RSA.h"
#include "encriptar.h"
typedef long long ll;

RSA::RSA(int p, int q, int r):p(0), q(0), m(0), phi(0), r(0), public_key(nullptr), private_key(nullptr)
{
    setParameters(p, q, r);
    calcKeys();
}


void RSA::setParameters(int p, int q, int r)
{
    this->p = p;
    this->q = q;
    this->r = r;
    this->m = p * q;
    this->phi = (p - 1) * (q -1);
}



void RSA::calcKeys()
{
    calcPublicKey();
    calcPrivateKey();
}





void RSA::calcPrivateKey()
{
    int a = this->phi;
    int b = this->r;
    int x = 0, y = 0;    

    utils::Euclid(a, b, x, y );

    int d = ((y % phi) + phi) % phi;

    this->private_key = new PrivateKey{d, this->p, this->q };

}


void RSA::calcPublicKey()
{
  this->public_key = new PublicKey{ this->r, this->m };
}


const PublicKey* RSA::getPublicKey() const
{
  return public_key;
}

const PrivateKey* RSA::getPrivateKey() const
{
  return private_key;
}


int RSA::encrypt(char c)
{
  encriptar enc(public_key);
  int out = enc.encriptarChar(c);
  return out;
}
