#include <bits/stdc++.h>
using namespace std;
void SinhTH(int x[], int n, int k)
{
    int i = 0;
    // khởi tạo
    for (i = 1; i <= k; i++)
    {
        x[i] = i;
    }
    while (1)
    {
        // In ra màn hình
        for (i = 1; i <= k; i++)
        {
            cout << x[i];
        }
        cout << ' ';
        // tìm phần tử x[i] sao cho x[i] < n-k+i;
        i = k;
        while (i > 0 && x[i] >= n - k + i)
        {
            i--;
        }
        // Kiểm tra tổ hợp cuối
        if (i == 0)

        {   cout<<endl;
            return;
            
        }
        x[i] = x[i] + 1;
        for (int j = i + 1; j <= k; j++)
        {
            x[j] = x[i] + j - i;
        }
       
        
    }
}
int main()
{
    int x[100];
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        SinhTH(x, n, k);
    }
    return 0;
}