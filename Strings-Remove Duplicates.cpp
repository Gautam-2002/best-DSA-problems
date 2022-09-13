#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str, ans;
    cin >> str;
    int i = 1, j = 0;
    ans.push_back(str[0]);
    while (i < str.size())
    {
        if (str[i] != ans[j])
        {
            ans.push_back(str[i]);
            i++;
            j++;
        }
        else
        {
            i++;
        }
    }
    cout << ans;
    return 0;
}