#include <bits/stdc++.h>
using namespace std;

bool isPal(string a)
{
    string b = a;
    reverse(b.begin(), b.end());
    if (a == b)
        return 1;
    return 0;
}

int main()
{
    string str;
    getline(cin, str); // or cin>>str;
    int cnt = 0;

    for (int i = 1; i <= str.size(); i++)
    {
        for (int j = 0; j + i - 1 < str.size(); j++)
        {
            string temp = str.substr(j, i);
            if (isPal(temp))
            {
                cnt++;
            }
        }
    }
    cout << cnt;
    return 0;
}