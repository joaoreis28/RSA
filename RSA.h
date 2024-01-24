#pragma once
#include <ostream>
#include <iostream>
#include "utils.h"
using namespace std;

typedef long long ll;


typedef struct
  {
    int s;
    int p;
    int q;
  } PrivateKey;

  typedef struct
  {
    int m;
    int r;
   
  } PublicKey;




class RSA
{
private:
    int p, q, phi;
    int m, r;
    
    PrivateKey* private_key;
    PublicKey* public_key;

    void calcPublicKey();
    void calcPrivateKey();
    void setParameters(int p, int q, int r);

    void calcKeys();
    
public:
    RSA() = delete;

    RSA(int p, int q, int r);
    const PublicKey* getPublicKey() const;
    const PrivateKey* getPrivateKey() const;
    int encrypt(char ch);

};