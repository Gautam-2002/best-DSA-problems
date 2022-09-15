#include <bits/stdc++.h>
using namespace std;
// 4 4
// 11 12 13 14
// 21 22 23 24
// 31 32 33 34
// 41 42 43 44
// 11, 21, 31, 41, 42, 43, 44, 34, 24, 14, 13, 12, 22, 32, 33, 23, END
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
        for (int i = sr; i <= er && cnt < total; i++)
        {
            cout << arr[i][sc] << ", ";
            cnt++;
        }
        sc++;
        for (int j = sc; j <= ec && cnt < total; j++)
        {
            cout << arr[er][j] << ", ";
            cnt++;
        }
        er--;
        for (int k = er; k >= sr && cnt < total; k--)
        {
            cout << arr[k][ec] << ", ";
            cnt++;
        }
        ec--;
        for (int l = ec; l >= sc && cnt < total; l--)
        {
            cout << arr[sr][l] << ", ";
            cnt++;
        }
        sr++;
    }
    cout << "END";
    return 0;
}