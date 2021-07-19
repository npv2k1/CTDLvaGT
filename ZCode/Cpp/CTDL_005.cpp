#include <bits/stdc++.h>
using namespace std;

void print_map(std::unordered_map<int, int> const &m)
{
    for (auto const &pair : m)
    {
        std::cout << "{" << pair.first << ": " << pair.second << "}\n";
    }
}
int main()
{

    unordered_map<int, int> f;
    int n;
    cin >> n;
    int *a = new int[n]{0};
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        f[a[i]]++;
    }
    int k;
    cin >> k;
    for (int i = 0; i < n; i++)
    {
        if (a[i] != k)
        {
            cout << a[i] << ' ';
        }
    }

    cout << endl;

    return 0;
}
