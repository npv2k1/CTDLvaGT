#include <bits/stdc++.h>
using namespace std;
int lis(int arr[], int n)
{
    int lis[n];
    lis[0] = arr[0];
    for (int i = 1; i < n; i++)
    {
        lis[i] = arr[i];
        for (int j = 0; j < i; j++)
            if (arr[i] > arr[j] && lis[i] < lis[j] + arr[i])
                lis[i] = lis[j] + arr[i];
    }

    return *max_element(lis, lis + n);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n] = {0};
        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
        }
        cout << lis(a, n) << endl;
    }
}
