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
        int a[n][m];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> a[i][j];
            }
        }
        int i, j;

        for (i = 1; i < n; i++)
            a[i][0] += a[i - 1][0];
        for (j = 1; j < m; j++)
            a[0][j] += a[0][j - 1];
        for (i = 1; i < n; i++)
        {
            for (j = 1; j < m; j++)
            {

                a[i][j] = min(a[i][j - 1], min(a[i - 1][j], a[i - 1][j - 1])) + a[i][j];
            }
        }
        
        cout << a[n - 1][m - 1] << endl;
    }
    return 0;
}