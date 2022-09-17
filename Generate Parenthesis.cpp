#include <bits/stdc++.h>
using namespace std;

void genpara(vector<string> &ans, int n, int open, int close, string curr)
{
    if (curr.size() == n * 2)
    {
        ans.push_back(curr);
        return;
    }
    if (open < n)
        genpara(ans, n, open + 1, close, curr + "(");
    if (close < open)
        genpara(ans, n, open, close + 1, curr + ")");
}

int main()
{
    int n;
    cin >> n;
    vector<string> ans;
    genpara(ans, n, 0, 0, "");
    reverse(ans.begin(), ans.end());
    for (int i = 0; i < ans.size(); i++)
        cout << ans[i] << endl;

    return 0;
}