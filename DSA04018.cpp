#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k = 1;
        cin >> n;
        vector<int> a;
        for (int i = 0; i < n; i++)
        {
            int tmp;
            cin >> tmp;
            a.push_back(tmp);
        }

        vector<int>::iterator itr = find(a.begin(), a.end(), k);

        if (itr != a.cend())
        {
            cout << distance(a.begin(), itr);
        }
        else
        {
            cout << n;
        }
        cout << endl;
    }
    return 0;
}