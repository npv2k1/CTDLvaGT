#include <iostream>
using namespace std;
#define int long long
int fib(int x)
{
    if (x == 1 || x == 2)
        return 1;
    else
    {
        int f1 = 1, f2 = 1, fn;
        for (int i = 3; i <= x; i++)
        {
            fn = f1 + f2;
            f1 = f2;
            f2 = fn;
        }
        return fn;
    }
}
char find(int N, int K)
{
    if (N == 1)
        return 'A';
    else if (N == 2)
        return 'B';
    else
    {
        int Temp = fib(N - 2);
        if (K > Temp)
            return find(N - 1, K - Temp);
        else
            return find(N - 2, K);
    }
}
int32_t main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int N, K;
        cin >> N >> K;

        cout << find(N, K) << endl;
    }
    return 0;
}
/**
 * @brief 
 * !Not me
 * 
 */
