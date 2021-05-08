#include <bits/stdc++.h>
#define int long long
using namespace std;
int32_t main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a, a + n);
        int s1 = 0, s2 = 0;
        if (k < n / 2)
        {
            for (int i = 0; i < k; i++)
            {
                s1 += a[i];
            }
            for (int i = k; i < n; i++)
            {
                s2 += a[i];
            }
            cout << abs(s1 - s2) << '\n';
        }
        else
        {
            for (int i = 0; i < n - k; i++)
            {
                s1 += a[i];
            }
            for (int i = n - k; i < n; i++)
            {
                s2 += a[i];
            }
            cout << abs(s1 - s2) << '\n';
        }
    }

    return 0;
}