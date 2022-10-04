//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution
{
private:
    void insertAtBottom(stack<int> &s, int x)
    {
        if (s.empty())
        {
            s.push(x);
            return;
        }
        int num = s.top();
        s.pop();
        insertAtBottom(s, x);
        s.push(num);
    }
    void solve(stack<int> &st)
    {
        // base case
        if (st.empty())
        {
            return;
        }
        int num = st.top();
        st.pop();
        // recursive call
        Reverse(st);

        insertAtBottom(st, num);
    }

public:
    stack<int> Reverse(stack<int> &st)
    {
        solve(st);
        return st;
    }
};

//{ Driver Code Starts.

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int N;
        cin >> N;
        stack<int> St;
        for (int i = 0; i < N; i++)
        {
            int x;
            cin >> x;
            St.push(x);
        }
        Solution ob;
        stack<int> ans = ob.Reverse(St);
        vector<int> res;
        while (ans.size())
        {
            res.push_back(ans.top());
            ans.pop();
        }
        for (int i = res.size() - 1; i >= 0; i--)
        {
            cout << res[i] << " ";
        }

        cout << endl;
    }
}
// } Driver Code Ends