#include <bits/stdc++.h>
using namespace std;
int n, a[50][50] = {0};
vector<string> res;

void find(int x, int y, string path)
{
    if (x == n - 1 && x == y)
        res.push_back(path);
    for (int i = 0; i < 2; i++)
    {
        path.push_back(i + '0');
        if (i == 0)
            x++;
        else
            y++;
        if (x < n && y < n && a[x][y] == 1)
            find(x, y, path);
        path.pop_back();
        if (i == 0)
            x--;
        else
            y--;
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n;
        for (int i = 0; i < n; i++)
            for (int j = 0; j < n; j++)
                cin >> a[i][j];

        if (a[0][0] == 0 || a[n - 1][n - 1] == 0)
        {
            cout << -1 << '\n';
        }
        else
        {
            string path = "";
            find(0, 0, path);

            for (int i = 0; i < res.size(); i++)
            {
                for (int j = 0; j < res[i].length(); j++)
                {
                    res[i][j] == '1' ? cout << "R" : cout << "D";
                }
                cout << " ";
            }
            if (res.size() == 0)
            {
                cout << -1;
            }
            cout << '\n';
            res.clear();
        }
    }
    return 0;
}
/**
 * @brief 
 * 1181283	
2021-06-06

13:22:04

DI CHUYỂN TRONG MÊ CUNG 1	AC	0.01s	1548Kb	C/C++
 * ! not me
 */
