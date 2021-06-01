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
    }
    return true;
}

void out(const int *a, int n)
{
    for (int i = 0; i < n; ++i)
    {
        a[i] == 1 ? cout << 'H' : cout << 'A';
    }
    cout << '\n';
}
void gen(int n)
{
    int *a = new int[n]{0};
    a[0] = 1;
    a[n - 1] = 0;
    while (true)
    {
        if (check(a, n))
        {
            out(a, n);
        }
        //        out(a,n);
        int i = n - 2;
        for (; i > 0; i--)
        {

            if (a[i] == 0)
            {
                a[i] = 1;
                break;
            }
            a[i] = 0;
        }
        if (i <= 0)
        {
            break;
        }
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        gen(n);
    }

    return 0;
}
/*
1107356	
2021-05-30

21:12:09

HAHAHA	AC	0.01s	1612Kb	C/C++
*/