#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a;
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            int tmp;
            cin >> tmp;
            a.push_back(tmp);
            sum += tmp;
        }
        if (sum % 2 != 0)
        {
            cout << "NO";
        }
        else
        {
            cout << "YES";
        }
        cout << endl;
    }
    return 0;
}
/**
 * @brief 
 * Bài này Đang sai . //! WA
 * check tập con tổng bằng nhau chỉ cần tổng tất cả các phần tử chia hết cho 2.
 */