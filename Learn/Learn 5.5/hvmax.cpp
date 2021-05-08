#include <bits/stdc++.h>
using namespace std;
void printaaxSubSquare(int a[100][100], int n, int m)
{
}
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
        int S[n][m];
        int max_of_s, max_i, max_j;
        for (i = 0; i < n; i++)
            S[i][0] = a[i][0];
        for (j = 0; j < m; j++)
            S[0][j] = a[0][j];
        for (i = 1; i < n; i++)
        {
            for (j = 1; j < m; j++)
            {
                if (a[i][j] == 1)
                    S[i][j] = min(S[i][j - 1], min(S[i - 1][j],
                                                   S[i - 1][j - 1])) +
                              1;
                else
                    S[i][j] = 0;
            }
        }
        max_of_s = S[0][0];

        for (i = 0; i < n; i++)
        {
            for (j = 0; j < m; j++)
            {
                if (max_of_s < S[i][j])
                {
                    max_of_s = S[i][j];
                }
            }
        }

        cout << max_of_s << endl;
    }
    return 0;
}