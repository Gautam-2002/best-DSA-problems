#include <bits/stdc++.h>
using namespace std;

int maxCirSum(int n, int arr[])
{
    int kmax = INT_MIN, curr1 = 0;
    int total = 0, maxi = INT_MIN;
    int kmin = INT_MAX, curr2 = 0;

    for (int i = 0; i < n; i++)
    {
        curr1 += arr[i];
        kmax = max(kmax, curr1);
        if (curr1 < 0)
        {
            curr1 = 0;
        }
        curr2 += arr[i];
        kmin = min(kmin, curr2);
        if (curr2 > 0)
        {
            curr2 = 0;
        }
        total += arr[i];
        maxi = max(maxi, arr[i]);
    }
    int ans1 = kmax, ans2 = total - kmin;
    if (ans1 <= 0 && ans2 <= 0)
    {
        return maxi;
    }
    return max(ans1, ans2);
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
        cout << maxCirSum(n, arr) << endl;
    }
    return 0;
}