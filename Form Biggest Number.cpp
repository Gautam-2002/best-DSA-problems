#include <bits/stdc++.h>
using namespace std;

bool comp(string a, string b)
{
    string s1 = a + b;
    string s2 = b + a;
    return s1 > s2;
}
class Solution
{
public:
    // The main function that returns the arrangement with the largest value as
    // string.
    // The function accepts a vector of strings

    string printLargest(vector<string> &arr)
    {
        sort(arr.begin(), arr.end(), comp);
        string ans = "";
        for (int i = 0; i < arr.size(); i++)
        {
            ans += arr[i];
        }
        return ans;
    }
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, i;
        cin >> n;
        vector<string> arr(n);
        for (i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.printLargest(arr);
        cout << ans << "\n";
    }
    return 0;
}
