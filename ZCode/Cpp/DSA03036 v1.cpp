#include <bits/stdc++.h>

using namespace std;

void out(vector<int>(a))
{
    for (int i = 0; i < a.size(); ++i)
    {
        cout << a[i] << ' ';
    }
    cout << endl;
}

void gen(int n)
{
    vector<int> a;
    a.push_back(0);
    vector<int> b;
    b.push_back(1);
    while (a.size() < n)
    {

        a.back() == 1 ? a.push_back(0) : a.push_back(1);
        b.back() == 1 ? b.push_back(0) : b.push_back(1);
    }
    out(a);
    out(b);
}

int main()
{
    int t;
    cin >> t;
    gen(t);

    return 0;
}
/*
1107639	
2021-05-30

21:24:29

XÂU NHỊ PHÂN XEN KẼ	AC	0.02s	1548Kb
*/