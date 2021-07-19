#include <bits/stdc++.h>
using namespace std;

int findSub(int *a, int n)
{
    int tmp = 0, res = 0;
    int *dp = new int[n + 1]{0};

    for (int i = 1; i <= n; i++)
    {
        if (tmp > 0)
            tmp += a[i];
        else
            tmp = a[i];

        dp[i] = max(tmp, dp[i - 1]);
    }

    return dp[n];
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int *a = new int[n + 1]{0};
        for (int i = 1; i <= n; i++)
            cin >> a[i];

        cout << findSub(a, n) << endl;
    }
    return 0;
}
