//#include "conio.h"
#include <iostream>

using namespace std;
void XnpKt(int x[], int n, int k)
{
    int c = 0;
    int i;
    // Khởi tạo
    for (i = 1; i <= n; i++)
        x[i] = 0;
    // lặp
    while (1)
    {

    
        c = 0;
        for (int j = 1; j <= n; j++)
        {
            if (x[j] == 1)
            {
                c += 1;
            }
        }

        if (c == k)
        {
            for (int j = 1; j <= n; j++)
                cout << x[j];
            cout << endl;
        }
        i = n;
        while (i > 0 && x[i] == 1)
        {
            x[i] = 0;
            i--;
        }
        if (i == 0)
            return;
        else
        {
            x[i] = 1;
        }
    }
}

int main()
{
    int x[50];
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        XnpKt(x, a, b);
        
    }
    return 0;
}