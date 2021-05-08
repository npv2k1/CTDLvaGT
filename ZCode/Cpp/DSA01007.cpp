//quay lui xau nhi phan ke tiep

#include <iostream>

using namespace std;
int a[100], n;
void print()
{
    for (int i = 1; i <= n; i++)
        a[i]?cout<<"B":cout<<"A";
    cout << ' ';
}
void Try(int i)
{
    for (int j = 0; j <= 1; j++)
    {
        a[i] = j;
        if (i == n)
            print();
        else
            Try(i + 1);
    }
}

int main()
{
    int t;
    cin>>t;
    while(t--){
        cin >> n;
        for (int i = 1; i <= n; i++)
            a[i] = 0;
        Try(1);
        cout<<endl;
    }
    return 0;
}

/**
 * @brief 
 * 
 */