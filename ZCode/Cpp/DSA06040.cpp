#include <bits/stdc++.h>
using namespace std;
long long a, b, c, A[1000001], B[1000001], C[1000001];

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> a >> b >> c;
        for (int i = 0; i < a; i++)
            cin >> A[i];
        for (int i = 0; i < b; i++)
            cin >> B[i];
        for (int i = 0; i < c; i++)
            cin >> C[i];

        long long i = 0, j = 0, z = 0, ok = 1;
        while (!(i >= a || j >= b || z >= c))
        {
            if (A[i] == B[j] && B[j] == C[z])
            {
                cout << A[i] << " ";
                i++;
                j++;
                z++;
                ok = 0;
            }
            else
            {
                long long Max = max(A[i], max(B[j], C[z]));
                if (A[i] < Max)
                    i++;
                if (B[j] < Max)
                    j++;
                if (C[z] < Max)
                    z++;
            }
        }
        if (ok)
        {
            cout << "NO";
        }
        cout << endl;
    }
    return 0;
}
// !not me
