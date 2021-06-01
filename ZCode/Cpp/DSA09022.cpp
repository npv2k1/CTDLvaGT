#include <bits/stdc++.h>

using namespace std;

int n, c;

void DFS(vector<vector<int>> ke, int u)
{
    bool vs[n + 10];
    bool ck[n + 10];
    for (int i = 1; i <= n + 10; ++i)
    {
        vs[i] = false;
        ck[i] = false;
    }
    set<int> res;
    bool ok = false;
    vs[u] = 1;
    stack<int> s;
    s.push(u);
    while (!s.empty())
    {
        ok = false;
        int x = s.top();
        if (!ck[x])
        {
            cout << x << ' ';
        }

        ck[x] = 1;

        for (int i = 0; i < ke[x].size(); ++i)
        {
            int v = ke[x][i];
            if (vs[v] == 0)
            {
                vs[v] = 1;
                s.push(v);
                ok = true;
                break;
            }
        }
        if (!ok)
        {
            s.pop();
        }
    }

    cout << endl;
}

int main()
{
    int t = 0;
    cin >> t;
    while (t--)
    {
        int s;
        cin >> n >> c >> s;
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
        }

        DFS(ke, s);
    }

    return 0;
}
/*
1106908	
2021-05-30

20:39:36

DFS TRÊN ĐỒ THỊ CÓ HƯỚNG	AC	0.05s	3344Kb
*/