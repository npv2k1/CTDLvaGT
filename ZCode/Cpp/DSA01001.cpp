#include <iostream>
#include <string>
using namespace std;
int main()
{
    int t;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        string s;
        cin >> s;
        for (int i = s.length() - 1; i >= 0;)
        {
            if (s[i] == '0')
            {
                s[i] = '1';
                break;
            }
            s[i] = '0';
            i--;
        }
        for (int i = 0; i < s.length(); i++)
        {
            cout << s[i];
        }
        cout << endl;
    }
}