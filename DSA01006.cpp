#include <iostream>
using namespace std;
int x[50] = {0}, vs[50] = {0};
void DeQuyHV(int k,int n){
    for (int i = n; i >=1; i--)
    {
        if(!vs[i]){
            x[n-k+1]=i;
            vs[i]=1;
            if(k==1){
                for (int j = 1; j <= n; j++)
                {
                    cout<<x[j];
                }
                cout<<' ';                
            }
            else{
                DeQuyHV(k-1,n);
            }
            vs[i]=0;            
        }
    }
    
}
int main()
{
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        DeQuyHV(n,n);
        cout<<endl;
    }
    return 0;
}