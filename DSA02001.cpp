#include <bits/stdc++.h>
using namespace std;
void out(int *a, int n)
{
    cout << '[';
    for (int i = 0; i < n; i++)
    {
        cout << a[i];
        if (i == n - 1)
        {
            break;
        }
        cout << ' ';
    }
    cout << ']';
    cout << endl;
    return;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int *a = new int[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        while (n > 0)
        {
            out(a, n);
            n -= 1;
            for (int i = 0; i < n; i++)
            {
                a[i] = a[i] + a[i + 1];
            }
        }
    }
    return 0;
}