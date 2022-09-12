#include <bits/stdc++.h>
using namespace std;

int maxWater(int n, int arr[])
{
    int ml[n];
    int mr[n];
    ml[0] = arr[0];
    mr[n - 1] = arr[n - 1];
    for (int i = 1; i < n; i++)
    {
        ml[i] = max(arr[i], ml[i - 1]);
    }
    for (int i = n - 2; i >= 0; i--)
    {
        mr[i] = max(arr[i], mr[i + 1]);
    }
    int ans[n];
    for (int i = 0; i < n; i++)
    {
        ans[i] = min(ml[i], mr[i]);
    }
    int water = 0;
    for (int i = 1; i < n - 1; i++)
    {
        water += (ans[i] - arr[i]);
    }
    return water;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        cout << maxWater(n, arr) << endl;
    }
    return 0;
}