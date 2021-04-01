#include <bits/stdc++.h>
typedef unsigned long long int ulli;
using namespace std;
ulli vector2int(vector<int> a)
{
    ulli res = 0;
    for (int i = 0; i < a.size(); i++)
    {
        res = res * 10 + a[i];
    }
    return res;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        vector<int> a;
        for (int i = 0; i < n; i++)
        {
            int tmp;
            cin >> tmp;
            a.push_back(tmp);
        }
        // xắp xếp từ nhỏ tới lớn
        sort(a.begin(), a.end());
        ulli num1 = 0;
        for (int i = 0; i < n; i += 2)
        {
            if (a[i] == -1)
                continue;
            num1 = num1 * 10 + a[i];
            a[i] = -1;
        }
        ulli num2 = 0;
        for (int i = 1; i < n; i += 2)
        {
            if (a[i] == -1)
                continue;
            num2 = num2 * 10 + a[i];
        }
        // cout<<num1<<":::"<<num2<<endl;
        cout << num1 + num2 << endl;
    }
    return 0;
}

/**
 * @brief 
 * Giai thuat
 * số thứ nhất a[0], a[2], a[4]
 * số thứ hai a[1], a[3], a[]
 * ta nhận thấy thế này vd với dãy [1,2,3,4,5,6,7,8,9]
 * 
 */