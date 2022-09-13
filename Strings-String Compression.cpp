#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin >> str;
    int cnt = 0;
    for (int i = 0; i < str.size(); i++)
    {
        cnt = 1;
        while (i < str.size() - 1 && str[i] == str[i + 1])
        {
            cnt++;
            i++;
        }
        if (cnt == 1)
            cout << str[i];
        else
            cout << str[i] << cnt;
    }
    return 0;
}