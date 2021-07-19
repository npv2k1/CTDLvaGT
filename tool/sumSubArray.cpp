#include <bits/stdc++.h>
using namespace std;
// Function to print subarray with sum as given sum
void subArraySum(int arr[], int n, int sum)
{
    // create an empty map
    unordered_map<int, int> map;

    // Maintains sum of elements so far
    int curr_sum = 0;

    for (int i = 0; i < n; i++)
    {
        curr_sum = curr_sum + arr[i];
        if (curr_sum == sum)
        {
            cout << "YES" << endl;
            return;
        }
        if (map.find(curr_sum - sum) != map.end())
        {
            cout << "YES" << endl;
            return;
        }
        map[curr_sum] = i;
    }
    cout << "NO" << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--)
    {
        int n, s;
        cin >> n >> s;
        int a[n] = {0};
        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
        }
        subArraySum(a, n, s);
    }
}
