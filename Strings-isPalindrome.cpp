#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin >> str;
    int l = 0;
    int r = str.size() - 1;
    while (l <= r)
    {
        if (str[l] == str[r])
        {
            l++;
            r--;
        }
        else
        {
            cout << "false";
            return 0;
        }
    }
    cout << "true";
    return 0;
}