#include <bits/stdc++.h>

using namespace std;
#define int long long
int a[100] = {0};
void gen()
{

    a[1] = 1, a[2] = 2, a[3] = 4;
    for (int i = 4; i <= 100; i++)
    {
        a[i] = a[i - 1] + a[i - 2] + a[i - 3];
    }
}

int32_t main()
{

    int t;
    cin >> t;
    gen();
    while (t--)
    {
        int n;
        cin >> n;
        cout << a[n] << endl;
    }
    return 0;
}
