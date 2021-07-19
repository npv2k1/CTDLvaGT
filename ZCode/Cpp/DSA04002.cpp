#include <iostream>
using namespace std;
#define int long long
#define MOD 1000000007
int spow(int a, int b)
{
    if (b == 0)
        return 1;
    else if (b == 1)
        return a;
    else
    {
        int r = spow(a, b / 2) % MOD;
        if (b % 2 == 0)
            return (r * r) % MOD;
        else
            return (((r * r) % MOD) * a) % MOD;
    }
}

void printPow(int n)
{
    int x = n, p = 0;
    while (x)
    {
        p = p * 10 + x % 10;
        x /= 10;
    }
    cout << spow(n, p) << endl;
}
int32_t main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        printPow(n);
    }
    return 0;
}
/**
 * @brief 
 * !not me
 * 
 */
