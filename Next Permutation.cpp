#include <bits/stdc++.h>
using namespace std;

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
        int idx = -1;
        for (int i = n - 2; i >= 0; i--)
        {
            if (arr[i] < arr[i + 1])
            {
                idx = i;
                break;
            }
        }
        if (idx == -1)
        {
            for (int i = n - 1; i >= 0; i--)
                cout << arr[i] << " ";
            cout << endl;
        }
        else
        {
            int idx0;
            for (int i = n - 1; i > idx; i--)
            {
                if (arr[idx] < arr[i])
                {
                    idx0 = i;
                    break;
                }
            } // cout<<arr[idx]<<" * "<<arr[idx0]<<endl;
            swap(arr[idx], arr[idx0]);
            reverse(arr + idx + 1, arr + n);
            for (int i = 0; i < n; i++)
            {
                cout << arr[i] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}