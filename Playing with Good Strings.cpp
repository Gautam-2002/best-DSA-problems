#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin >> str;
    int cnt = 0, ans = 0;
    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
        {
            cnt++;
            ans = max(ans, cnt);
        }
        else
        {
            cnt = 0;
        }
    }
    cout << ans;
    return 0;
}