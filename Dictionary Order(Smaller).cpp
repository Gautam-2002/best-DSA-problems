#include <bits/stdc++.h>
using namespace std;

void permute(string str, int idx, vector<string> &ans)
{
    if (idx == str.size())
    {
        ans.push_back(str);
        return;
    }
    for (int i = idx; i < str.size(); i++)
    {
        swap(str[idx], str[i]);
        permute(str, idx + 1, ans);
        // backtrack
        swap(str[idx], str[i]);
    }
}

int main()
{
    string str;
    cin >> str;
    int idx = 0;
    vector<string> ans;
    permute(str, idx, ans);
    sort(ans.begin(), ans.end());
    int i, j;
    for (i = 0; i < ans.size(); i++)
    {
        if (ans[i] == str)
        {
            break;
        }
    }
    for (j = 0; j < i; j++)
    {
        cout << ans[j] << endl;
    }
    return 0;
}