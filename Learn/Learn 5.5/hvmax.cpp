#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        int a[n][m];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> a[i][j];
            }
        }
        int i, j;
        // Tạo ma trận S kích thước n*m
        int S[n][m];
        int max_of_s;
        // hàng 0 và cột 0 bằng của ma trận a
        for (i = 0; i < n; i++)
            S[i][0] = a[i][0];
        for (j = 0; j < m; j++)
            S[0][j] = a[0][j];

        // lặp
        for (i = 1; i < n; i++)
        {
            for (j = 1; j < m; j++)
            {
                // 
                if (a[i][j] == 1)
                    S[i][j] = min(S[i][j - 1], min(S[i - 1][j],S[i - 1][j - 1])) +1;
                else
                    S[i][j] = 0;
            }
        }

        max_of_s = S[0][0];
        for (i = 0; i < n; i++)
        {
            for (j = 0; j < m; j++)
            {
                if (max_of_s < S[i][j])
                {
                    max_of_s = S[i][j];
                }
            }
        }

        cout << max_of_s << endl;
    }
    return 0;
}
// Sử dụng thuật toán. Quy hoạch động bằng cách tính
/**
 * @brief 
 * https://www.geeksforgeeks.org/maximum-size-sub-matrix-with-all-1s-in-a-binary-matrix/
 * 
 */