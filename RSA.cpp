#include <bits/stdc++.h>
using namespace std;

typedef long long ll;


ll expbin(ll a, ll exp, ll n)
{
    if(exp == 0)
        return 1;
    if(exp & 1)
         return (a * expbin(a, exp - 1, n)) % n;
    ll b = expbin(a, exp/2, n);
    return  (b * b) % n;
    
}

int totEuler(int a, int b)
{
    return (a -1) * (b - 1);
}

ll euclid(ll a, ll b) {
  if (b == 0) { x = 1; y = 0; return a; }
  ll d = euclid(b, a % b);
  ll _x = x;
  x = y;
  y = _x - y * (a / b);
  return d;
}



ll gcdExtended(ll a, ll b, ll* x, ll* y)
{

	if (a == 0) {
		*x = 0, *y = 1;
		return b;
	}
	
	ll x1, y1;
	ll gcd = gcdExtended(b % a, a, &x1, &y1);
	
	*x = y1 - (b / a) * x1;
	*y = x1;

	return gcd;
}


ll modInverse(ll A, ll M)
{
	ll x, y;
	ll g = gcdExtended(A, M, &x, &y);
	
		int res = (x % M + M) % M;
		
	
    return res;
}

ll toASCII(string msg)
{
    string conv = "", aux;
    int a;
    for(char c:msg)
    {
        a = int(c);
        aux = to_string(a);
        conv = conv + aux;
    }
    ll res = stoi(conv); # estourando o limite do stoi , encontrar solucao
    return res;
}

int main()
{
    ll p,q, e, d;
    string s;
    cin >> p >> q;
    cin >> s;

    ll n = p * q;   
    n = p *q;
    ll tot = totEuler(p,q);
    e =17;   /* e geralmente é 3, 5, 17, 257, 65537, os primeiros numeros de Fermat, sao primos, e em binario so possuem dois bits setados 1*/
    d = modInverse(e, tot);
    ll message = toASCII(s);

   
    
    ll c = expbin(message, e, n);
    cout << c << endl;



    return 0;
}


