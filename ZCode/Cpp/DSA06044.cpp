#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin >> n;
    vector<int> chan;
    vector<int> le;
    int c = 0, l = 0;
    for (int i = 1; i <= n; ++i)
    {
        int tmp;
        cin >> tmp;
        if (i % 2 == 0)
        {
            chan.push_back(tmp);
        }
        else
        {
            le.push_back(tmp);
        }
    }
    sort(le.begin(), le.end());
    sort(chan.begin(), chan.end(), std::greater<>());
    for (int i = 1; i <= n; ++i)
    {

        if (i % 2 == 0)
        {
            if (c == chan.size())
                continue;
            cout << chan[c] << ' ';
            c++;
        }
        else
        {
            if (l == le.size())
                continue;
            cout << le[l] << ' ';
            l++;
        }
    }
}

/**
 * @brief 
 * 1258053	
2021-06-17

11:37:16

SẮP XẾP CHẴN LẺ	AC	0.12s	3648Kb	C/C++

 * ! my code 
 */
