#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        int a[n][n];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                a[i][j] = 0;
            }
        }
        for (int i = 0; i < m; i++)
        {
            int u, v;
            cin >> u >> v;
            a[u - 1][v - 1] = 1;
            // a[v - 1][u - 1] = 1;
        }
        for (int i = 0; i < n; i++)
        {
            cout << i + 1 << ':' << ' ';
            for (int j = 0; j < n; j++)
            {
                if (a[i][j])
                {
                    cout << j + 1 << ' ';
                }
            }
            cout << endl;
        }
    }

    return 0;
}