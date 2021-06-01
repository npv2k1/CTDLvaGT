#include <bits/stdc++.h>

using namespace std;

int n, c;
void BFS(vector<vector<int>> ke, int u, int y)
{
    bool vs[n+1];
    for (int i = 1; i <=n ; ++i) {
        vs[i]= false;
    }
    queue<int> q;
    vs[u] = true;
    q.push(u);
    while (!q.empty())
    {
        int v = q.front();
        q.pop();
        if (v == y)
        {
            cout << "YES" << endl;
            return;
        }

        for (int i = 0; i < ke[v].size(); i++)
        {
            if (!vs[ke[v][i]])
            {
                q.push(ke[v][i]);
                vs[ke[v][i]] = true;
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
        vector<vector<int>> ke;
        for (int i = 1; i <= n+1; i++)
        {
            vector<int> tmp;
            ke.push_back(tmp);
        }

        for (int i = 1; i <= c; ++i)
        {
            int x, y;
            cin >> x >> y;
            ke[x].push_back(y);
            ke[y].push_back(x);
        }
        int nquery;
        cin >> nquery;
        for (int nq = 0; nq < nquery; ++nq)
        {
            int x, y;
            cin >> x >> y;
            BFS(ke, x, y);
        }
    }

    return 0;
}