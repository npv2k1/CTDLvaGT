#include <iostream>
using namespace std;
#define MOD 123456789
#define int long long
int spow(int n, int k)
{
    if (k <= 1)
        return n;

    int temp = spow(n, k / 2) % MOD;
    if (k % 2 == 1)
    {
        int x = (n * ((temp * temp) % MOD)) % MOD;
        return x;
    }
    else
        return (temp * temp) % MOD;
}

int32_t main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        cout << spow(2, n - 1) << endl;
    }
    return 0;
}
