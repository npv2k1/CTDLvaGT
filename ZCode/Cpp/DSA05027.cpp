#include <bits/stdc++.h>

using namespace std;
#define int long long
#define MAX 1000
class obj
{
public:
    int v;
    int c;
    obj()
    {
        v = 0;
        c = 0;
    }
};
obj x[MAX];
int n, v, result;
int a[MAX][MAX];
void solve()
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= v; j++)
        {
            if (j < x[i].v)
                a[i][j] = a[i - 1][j];
            else
            {
                a[i][j] = max(a[i - 1][j], a[i - 1][j - x[i].v] + x[i].c);
            }
            result = max(result, a[i][j]);
        }
    }
}

int32_t main()
{

    int t;
    cin >> t;
    while (t--)
    {
        result = 0;
        cin >> n >> v;
        for (int i = 1; i <= n; i++)
            cin >> x[i].v;
        for (int i = 1; i <= n; i++)
            cin >> x[i].c;
        solve();
        cout << result << endl;
    }
    return 0;
}
