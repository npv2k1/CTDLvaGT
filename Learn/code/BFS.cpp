#include <bits/stdc++.h>
using namespace std;
#define MAX 2000
int a[MAX][MAX] = {0};
int vs[MAX] = {0};
int n, c, u;
void BFS(int u)
{
    queue<int> q;
    vs[u] = 1;
    q.push(u);
    while (!q.empty())
    {
        int v = q.front();
        cout << v << ' ';
        q.pop();
        for (int i = 1; i <= n; i++)
        {
            if (a[v][i] == 1 && vs[i] == 0)
            {
                vs[i] = 1;
                q.push(i);
            }
        }
    }
}
int main()
{
    int t = 0;
    cin >> t;
    while (t--)
    {

        cin >> n >> c >> u;
        for (int i = 1; i <= n; ++i)
        {
            vs[i] = 0;
            for (int j = 1; j <= n; ++j)
            {
                a[i][j] = 0;
            }
        }
        for (int i = 1; i <= c; ++i)
        {
            int x, y;
            cin >> x >> y;
            a[x][y] = 1;
        }

        BFS(u);
        cout << '\n';
    }

    return 0;
}