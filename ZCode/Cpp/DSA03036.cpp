#include <bits/stdc++.h>

using namespace std;

bool check(const int *a, int n)
{
    for (int i = 0; i < n - 1; ++i)
    {
        if (a[i] == 1 && a[i] == a[i + 1])
        {
            return false;
        }
        else if (a[i] == 0 && a[i] == a[i + 1])
        {
            return false;
        }
    }
    return true;
}

void out(const int *a, int n)
{
    for (int i = 0; i < n; ++i)
    {
        cout << a[i] << ' ';
    }
    cout << '\n';
}
void gen(int n)
{
    int *a = new int[n]{0};
    while (true)
    {
        if (check(a, n))
        {
            out(a, n);
        }
        int i = n - 1;
        for (; i >= 0; i--)
        {

            if (a[i] == 0)
            {
                a[i] = 1;
                break;
            }
            a[i] = 0;
        }
        if (i < 0)
        {
            break;
        }
    }
}
int main()
{
    int t;
    cin >> t;
    gen(t);

    return 0;
}