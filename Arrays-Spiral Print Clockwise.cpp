#include <bits/stdc++.h>
using namespace std;

int main()
{
    int r, c;
    cin >> r >> c;
    int arr[r][c];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin >> arr[i][j];
        }
    }
    int sr = 0, sc = 0;
    int er = r - 1, ec = c - 1;
    int cnt = 0, total = r * c;
    while (cnt < total)
    {
        for (int i = sc; i <= ec && cnt < total; i++)
        {
            cout << arr[sr][i] << ", ";
            cnt++;
        }
        sr++;
        for (int j = sr; j <= er && cnt < total; j++)
        {
            cout << arr[j][ec] << ", ";
            cnt++;
        }
        ec--;
        for (int k = ec; k >= sc && cnt < total; k--)
        {
            cout << arr[er][k] << ", ";
            cnt++;
        }
        er--;
        for (int l = er; l >= sr && cnt < total; l--)
        {
            cout << arr[l][sc] << ", ";
            cnt++;
        }
        sc++;
    }
    cout << "END";
    return 0;
}