

#include <iostream>
using namespace std;

int n;
int vt[100] = {0};
int A[100];

void out()
{
    for (int i = 1; i <= n; i++)
        cout << A[i];
    cout << " ";
}

void Try(int k)
{
    for (int i = 1, j = n; i <= n && j >= 1; i++, j--)
    {

        if (!vt[i])
        {
            A[k] = j;
            vt[i] = 1;
            if (k == n)
                out();
            else
                Try(k + 1);
            vt[i] = 0;
        }
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n;
        Try(1);
        cout << '\n';
    }
}