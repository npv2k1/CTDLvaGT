#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> a;
        for (int i = 0; i < n; i++)
        {
            int tmp;
            cin >> tmp;
            a.push_back(tmp);
        }
        int index = (count(a.begin(), a.end(), k));
        if (index)
        {
            cout << (count(a.begin(), a.end(), k));
        }
        else
        {
            cout << -1;
        }
        cout << endl;
    }
    return 0;
}