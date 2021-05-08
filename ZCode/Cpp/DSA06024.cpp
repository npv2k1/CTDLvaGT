#include<iostream>
using namespace std;

void out(int *a,int n){
    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<' ';
    }
    cout<<endl;
    
}

int main(){
    int n;
    cin>>n;
    int *a = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n-1;i++){
        int min =a[i],d=i;
        for(int j=i+1;j<n;j++){
            if(a[j]<min){
                min=a[j];
                d=j;
            }
        }        
        a[d] = a[i];
        a[i] = min;
        cout << "Buoc " <<i+1<<":"<<' ';
        out(a, n);
    }
    

}