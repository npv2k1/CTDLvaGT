#include <bits/stdc++.h>
using namespace std;
bool greedySort(int arr[], int n)
{
    int cp[n];
    // Tạo bản sao
    copy(arr, arr + n, cp);
    // sort
    sort(cp, cp + n);
    for (int i = 0; i < n; i++)
    {

        // cp:  1 2 3 4 5 6 7
        // arr: 1 6 3 4 5 7 2
        //        ^       ^
        // Khi lật thì nó sẽ thay đổi vị trí đầu cuối còn ko thể thay đổi giá trị được.
        if (arr[i] != cp[i] && arr[n - 1 - i] != cp[i])
            return false;
    }

    return true;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n] = {};
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        if (greedySort(a, n))
            cout << "Yes";
        else
            cout << "No";
        cout << endl;
    }

    return 0;
}