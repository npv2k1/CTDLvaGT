#include <bits/stdc++.h>
using namespace std;
#define int long long
#define MOD 1000000007

void P(int n, int k)
{
    int res = 1;
    for (int i = n - k + 1; i <= n; i++)
    {
        res = (res * i) % MOD;
    }
    cout << res << '\n';
}
int32_t main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        P(n, k);
    }
    return 0;
}
