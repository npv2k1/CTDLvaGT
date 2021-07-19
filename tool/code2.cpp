#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main()
{
    int t;
    cin >> t;
    while (t--)
    {
        queue<int> q;
        q.push(1);

        int c = 0;
        int n;
        cin >> n;
        while (true)
        {
            int top = q.front();
            q.pop();
            if (top > n)
            {
                cout << c << '\n';
                break;
            }
            q.push(top * 10);
            q.push(top * 10 + 1);
            c++;
        }
    }
    return 0;
}
