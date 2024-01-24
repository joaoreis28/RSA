#include "encriptar.h"



encriptar::encriptar(const PublicKey* key): text(""), public_key(key)
{

};




int encriptar::encriptarChar(char c) const
{    
    int res = utils::ExpBin(int(c), public_key->m, public_key->r);
    cout << res << endl;
    return res;
}