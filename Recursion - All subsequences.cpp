#include <bits/stdc++.h>
using namespace std;

void printSubsequences(string str, int index, string ans, vector<string> &sol)
{
    if (index >= str.length())
    {
        sol.push_back(ans);
        return;
    }
    // including
    printSubsequences(str, index + 1, ans + str[index], sol);
    // excluding
    printSubsequences(str, index + 1, ans, sol);
}

int main()
{
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        string str;
        string ans = "";
        vector<string> sol;
        cin >> str;
        printSubsequences(str, 0, ans, sol);
        sort(sol.begin(), sol.end());
        for (auto it : sol)
        {
            cout << it << endl;
        }
    }
    return 0;
}