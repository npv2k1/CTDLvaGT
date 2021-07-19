#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 0;
    cin >> t;
    cin.ignore();
    while (t--)
    {

        string a, b;
        cin >> a >> b;
        int x = a.length();
        int y = b.length();
        int res[x + 1][y + 1]{0};
        for (int i = 0; i <= x; i++)
        {

            for (int j = 0; j <= y; j++)
            {
                if (i == 0 || j == 0)
                {
                    res[i][j] = 0;
                }
                else if (a[i - 1] == b[j - 1])
                    res[i][j] = 1 + res[i - 1][j - 1];
                else
                {
                    res[i][j] = max(res[i - 1][j], res[i][j - 1]);
                }
            }
        }
        cout << res[x][y] << endl;
    }
}
/**
 * @brief 1264744	
2021-06-18

08:03:40

XÂU CON CHUNG DÀI NHẤT	AC	0.03s	5980Kb	C/C++
 * 
 */
