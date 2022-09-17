#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    long long arr[n];
    long long ans[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        ans[i] = arr[i];
    }
    int q;
    cin >> q;
    int qarr[q];
    for (int i = 0; i < q; i++)
    {
        cin >> qarr[i];
    }
    for (int i = 0; i < q; i++)
    {
        for (int j = 0; j < n; j++)
        {
            ans[j] = arr[j] + arr[(j - qarr[i] + n) % n];
        }
        for (int k = 0; k < n; k++)
        {
            arr[k] = ans[k];
        }
    }
    int answer = 0;
    for (int i = 0; i < n; i++)
    {
        answer = ((answer) % 1000000007 + (ans[i]) % 1000000007) % 1000000007;
    }
    cout << answer;
    return 0;
}