#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            arr[i][j]=0;
        }        
    }
    int d=n;
    while(d--){
        int a,b;
        cin>>a>>b;
        arr[a-1][b-1]=1;
    }
    for (int i = 0; i < n; i++)
    {
        
        for (int j = 0; j < n; j++)
        {
            
            if(arr[i][j]){
                cout << i + 1 << ' ';
                cout<<j+1<<endl;
            }
        }
        
    }

    return 0;
}