#include <bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int s, int e, int m)
{
    if (s > e)
    {
        return -1;
    }
    int mid = s + (e - s) / 2;

    if (arr[mid] == m)
    {
        return mid;
    }
    else if (arr[mid] < m)
    {
        return binarySearch(arr, mid + 1, e, m);
    }
    else
    {
        return binarySearch(arr, s, mid - 1, m);
    }
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int m;
    cin >> m;
    cout << binarySearch(arr, 0, n - 1, m);
    return 0;
}