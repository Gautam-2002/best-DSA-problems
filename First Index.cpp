#include <bits/stdc++.h>
using namespace std;

int first(int arr[], int idx, int n, int m)
{
    if (idx >= n - 1)
        return -1;
    if (arr[idx] == m)
        return idx;
    return first(arr, idx + 1, n, m);
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    int m;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cin >> m;
    int idx = 0;
    cout << first(arr, idx, n, m);
    return 0;
}