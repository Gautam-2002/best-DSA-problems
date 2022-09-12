#include <bits/stdc++.h>
using namespace std;

bool isPossible(int arr[], int n, int m, int mid)
{
    int painters = 1;
    int time = 0;
    for (int i = 0; i < n; i++)
    {
        if (time + arr[i] <= mid)
        {
            time += arr[i];
        }
        else
        {
            painters++;
            if (painters > m || arr[i] > mid)
                return false;
            time = arr[i];
        }
    }
    return true;
}

int minTime(int arr[], int n, int m)
{
    int s = 0;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    int e = sum;
    int ans = -1;
    int mid = s + (e - s) / 2;
    while (s <= e)
    {
        if (isPossible(arr, n, m, mid))
        {
            ans = mid;
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}

int main()
{

    int k, n;
    cin >> k >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    cout << minTime(arr, n, k) << endl;

    return 0;
}