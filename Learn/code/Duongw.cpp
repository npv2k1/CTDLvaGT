#include <bits/stdc++.h>

using namespace std;
#define MAX 2000
int a[MAX][MAX] = {0};
int n, c;

void BFS(int u, int y)
{
    int vs[MAX] = {0};
    queue<int> q;
    vs[u] = 1;
    q.push(u);
    while (!q.empty())
    {
        int v = q.front();
        if (v == y)
        {
            cout << "YES" << endl;
            return;
        }
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
    cout << "NO" << endl;
}

int main()
{
    int t = 0;
    cin >> t;
    while (t--)
    {
        cin >> n >> c;
        for (int i = 0; i <= n; ++i)
        {
            for (int j = 0; j <= n; ++j)
            {
                a[i][j] = 0;
            }
        }
        for (int i = 1; i <= c; ++i)
        {
            int x, y;
            cin >> x >> y;
            a[x][y] = 1;
            a[y][x] = 1;
        }
        int nquery;
        cin >> nquery;
        for (int nq = 0; nq < nquery; ++nq)
        {
            int x, y;
            cin >> x >> y;
            BFS(x, y);
        }
    }

    return 0;
}