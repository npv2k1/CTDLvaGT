#include <bits/stdc++.h>
#define ll long long int
typedef unsigned long long int ulli;
using namespace std;
const long long int mod = 1000000007;
ll spow(ll x, ll y, ll p)
{
    // ! (x^y) % p
    ll res = 1; // Initialize result

    // Update x if it is more than or
    // equal to p
    x = x % p;

    while (y > 0)
    {

        // If y is odd, multiply x
        // with the result
        if (y & 1)
            res = (res * x) % p;

        // y must be even now
        y = y >> 1; // y = y/2
        x = (x * x) % p;
    }
    return res;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        cout << spow(n, k, mod) << endl;
    }
}
/**
 * @brief https://www.geeksforgeeks.org/find-abm-where-b-is-very-large/
 * 
 */