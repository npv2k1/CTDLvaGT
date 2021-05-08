#include <bits/stdc++.h>
typedef unsigned long long int ulli;
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<ulli> A;
        vector<ulli> B;
        for (int i = 0; i < n; i++)
        {
            ulli tmp;
            cin >> tmp;
            A.push_back(tmp);
        }
        for (int i = 0; i < n - 1; i++)
        {
            ulli tmp;
            cin >> tmp;
            B.push_back(tmp);
        }

        int i = n - 2;
        while (1)
        {
            if (B[i] == A[i])
            {
                if (i == n - 2)
                {
                    cout << n << endl;
                }
                else
                {
                    cout << i + 2 << endl;
                }

                break;
            }
            i--;
        }
    }
    return 0;
}