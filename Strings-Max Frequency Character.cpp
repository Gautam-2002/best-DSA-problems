#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin >> str;
    unordered_map<char, int> mp;
    int maxi = INT_MIN;
    for (int i = 0; i < str.size(); i++)
    {
        mp[str[i]]++;
        maxi = max(maxi, mp[str[i]]);
    }
    for (auto it : mp)
    {
        if (it.second == maxi)
        {
            cout << it.first;
            break;
        }
    }

    return 0;
}