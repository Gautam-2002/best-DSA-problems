//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    int NthRoot(int n, int m)
    {
        // Code here.
        int s = 1, e = m;
        int mid = -1;
        while (s <= e)
        {
            mid = s + (e - s) / 2;
            if (pow(mid, n) == m)
            {
                return mid;
            }
            else if (pow(mid, n) < m)
            {
                s = mid + 1;
            }
            else
            {
                e = mid - 1;
            }
        }
        return -1;
    }
};

//{ Driver Code Starts.
int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n, m;
        cin >> n >> m;
        Solution ob;
        int ans = ob.NthRoot(n, m);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends