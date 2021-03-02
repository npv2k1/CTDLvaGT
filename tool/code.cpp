#include <bits/stdc++.h>
using namespace std;
void out(int *a,int n){
    cout<<'[';
    for (int i = 0; i < n; i++)
    {
        cout<<a[i];
        if(i==n-1){
            break;
        }
        cout<<' ';
    }
    cout<<']';
    cout<<" ";
    return;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int *a = new int[n];
        int res[n][n]={0};
        int d=n;
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
        }
        int j=0;
        while(n>0){
            for (int i = 0; i < n; i++)
            {
                res[j][i]=a[i];
            }
            j+=1;            
            n-=1;
            for(int i=0;i<n;i++){
                a[i]=a[i]+a[i+1];
            }
        }
        for (int j = d-1; j >=0; j--)
        {
            n+=1;
            out(res[j],n);
            
        }       
        cout<<endl;
        
        
    }
    return 0;
}