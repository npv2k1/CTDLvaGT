#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long int ulli;
ulli numPaths(int m, int n)
{
    m += 1;
    n += 1;
    ulli path = 1;
    for (int i = n; i < (m + n - 1); i++)
    {
        path *= i;
        path /= (i - n + 1);
    }
    return path;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        cout << numPaths(n, m) << endl;
    }
    return 0;
}
