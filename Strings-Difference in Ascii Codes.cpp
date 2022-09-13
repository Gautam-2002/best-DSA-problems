#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin >> str;
    cout << str[0];
    for (int i = 1; i < str.size(); i++)
    {
        cout << str[i] - str[i - 1] << str[i];
    }
    return 0;
}