#include <bits/stdc++.h>
using namespace std;

int sti(string str)
{
    if (str.size() == 0)
        return -1;
    if (str.size() == 1)
    {
        return str[0] - '0';
    }
    int y = sti(str.substr(1));
    int x = str[0] - '0';

    x = x * pow(10, str.size() - 1) + y;
    return x;
}

int main()
{
    string str;
    cin >> str;
    int n = sti(str);
    cout << n;
    return 0;
}