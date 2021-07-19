/**
 * @file DSA06011.cpp
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2021-06-01
 * 
 * @copyright Copyright (c) 2021
 * https://www.geeksforgeeks.org/two-elements-whose-sum-is-closest-to-zero/
 */
#include <bits/stdc++.h>
using namespace std;
#define int long long
bool compare(int x, int y)
{
    return abs(x) < abs(y);
}
void out(vector<int> a)
{
    for (vector<int>::iterator it = a.begin(); it != a.end(); ++it)
    {
        cout << *it << " ";
    }
    cout << "\n";
}

void solve(vector<int> arr, int n)
{
    vector<int> num1;
    vector<int> num2;
    vector<int> source = arr;

    // Xắp xếp lại mảng theo trị tuyệt đối tăng dẫn

    sort(arr.begin(), arr.end(), compare);
    int min = INT_MAX, x, y;

    for (int i = 1; i < n; i++)
    {

        // Giá trị tuyệt đối cho biết nó có gần 0 hay không
        if (abs(arr[i - 1] + arr[i]) <= min)
        {

            // nếu tìm thấy giá trị thì cập nhật lại
            min = abs(arr[i - 1] + arr[i]);
            x = i - 1;
            y = i;
            num1.push_back(arr[x]);
            num2.push_back(arr[y]);
        }
    }

    //xuất
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < num1.size(); j++)
        {
            if (source[i] == num1[j])
            {
                cout << num1[j] + num2[j] << '\n';
                return;
            }
        }
    }
}

int32_t main()
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
        solve(a, n);
    }
    return 0;
}
/**
 * @brief 1131100	
2021-06-01

18:09:40

TỔNG GẦN 0 NHẤT	WA	0.04s	1612Kb	C/C++
 * 
 */
//!!!!

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while ((t--))
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
        }
        int min = INT_MAX;
        int x, y;
        for (int i = 0; i < n; ++i)
        {
            for (int j = i + 1; j < n; ++j)
            {
                if (abs(a[i] + a[j]) < min)
                {
                    min = abs(a[i] + a[j]);
                    x = a[i];
                    y = a[j];
                }
            }
        }
        cout << x + y << endl;
    }
}
//****************************************************************
/**
 * @brief 
 * 1258005	
2021-06-17

11:25:57

TỔNG GẦN 0 NHẤT	AC	0.01s	1612Kb	C/C++
 * 
 */
