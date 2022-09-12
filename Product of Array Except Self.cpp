#include <bits/stdc++.h>
using namespace std;

long long prod(int n, int arr[], int idx)
{
    long long ans = 1;
    for (int i = 0; i < n; i++)
    {
        if (i != idx)
        {
            ans *= arr[i];
        }
    }
    return ans;
}

int main()
{
    int n;
    cin >> n;
    int arr1[n];
    long long arr2[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr1[i];
    }
    for (int i = 0; i < n; i++)
    {
        arr2[i] = prod(n, arr1, i);
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr2[i] << " ";
    }
    return 0;
}