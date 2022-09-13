#include <bits/stdc++.h>
using namespace std;

int isPossible(int arr[], int n, int k, int mid)
{
    int cowCnt = 1;
    int lastPos = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] - lastPos >= mid)
        {
            cowCnt++;
            if (cowCnt == k)
                return true;
            lastPos = arr[i];
        }
    }
    return false;
}

int main()
{
    int n, k;
    cin >> n >> k;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + n);
    int s = 0, e = arr[n - 1]; // search space 0 and max element in arr
    int mid = s + (e - s) / 2;
    int ans;
    while (s <= e)
    {
        if (isPossible(arr, n, k, mid))
        {
            ans = mid;
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
    cout << ans;

    return 0;
}