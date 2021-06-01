
// C++ program to comput n! % p using Wilson's Theorem
#include <bits/stdc++.h>
typedef unsigned long long int ulli;
using namespace std;

ulli numberOfPaths(int m, int n)
{
    // We have to calculate m+n-2 C n-1 here
    // which will be (m+n-2)! / (n-1)! (m-1)!
    ulli path = 1;
    for (int i = n; i < (m + n - 1); i++)
    {
        path *= i;
        path /= (i - n + 1);
    }
    return path;
}

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        int arr[100][100];
        for (int i = 0; i < a; ++i)
        {
            for (int j = 0; j < b; ++j)
            {
                cin >> arr[i][j];
            }
        }
        cout << numberOfPaths(a, b) << '\n';
    }
    return 0;
}
/**
 * @brief 
 * 1115408	
2021-05-31

12:38:10

DI CHUYỂN TRONG MA TRẬN	AC	0.02s	1548Kb	C/C++
 */