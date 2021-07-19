#include <bits/stdc++.h>
using namespace std;

long long doubleArray(long long n, long long k)
{
    long long maxPosition = pow(2, n) - 1;
    long long middleMaxPosition = maxPosition / 2 + 1;
    if (k == middleMaxPosition)
        return n;
    else if (k < middleMaxPosition)
        return doubleArray(n - 1, k);
    else
        return doubleArray(n - 1, k - middleMaxPosition);
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n, k;
        cin >> n >> k;
        cout << doubleArray(n, k) << endl;
    }

    return 0;
}
/**
 * @brief 
 * !notme
ID	Thời gian	Bài tập	Kết quả	Thời gian	Bộ nhớ	Trình biên dịch
1181608	
2021-06-06

13:57:53

GẤP ĐÔI DÃY SỐ	AC	0.00s	1608Kb	C/C++
 * 
 */
