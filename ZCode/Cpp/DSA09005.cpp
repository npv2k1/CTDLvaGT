/**
 * @file DSA09005.cpp
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2021-06-01
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include <bits/stdc++.h>

using namespace std;

int n, c;
void BFS(vector<vector<int>> ke, int u)
{
    bool vs[n + 1];
    for (int i = 1; i <= n; ++i)
    {
        vs[i] = false;
    }
    queue<int> q;
    vs[u] = true;
    q.push(u);
    while (!q.empty())
    {
        int v = q.front();
        cout << v << ' ';
        q.pop();
        for (int i = 0; i < ke[v].size(); i++)
        {
            if (!vs[ke[v][i]])
            {
                q.push(ke[v][i]);
                vs[ke[v][i]] = true;
            }
        }
    }

    cout << '\n';
}

int main()
{
    int t = 0;
    cin >> t;
    while (t--)
    {
        int u;
        cin >> n >> c >> u;
        vector<vector<int>> ke;
        for (int i = 1; i <= n + 1; i++)
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

        BFS(ke, u);
    }

    return 0;
}
