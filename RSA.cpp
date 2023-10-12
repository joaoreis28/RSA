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


int main()
{
    ll p,q, e, d, n, m = 9;
    cin >> p >> q;
    n = p *q;
    ll tot = totEuler(p,q);
    e =17;

    d = modInverse(e, tot);



    ll c = expbin(m, e, n);
    cout << c << endl;



    return 0;
}
