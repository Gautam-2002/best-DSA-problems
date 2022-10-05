//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    int checkRedundancy(string s)
    {
        // code here
        stack<char> st;
        for (int i = 0; i < s.size(); i++)
        {
            char ch = s[i];
            if (ch == '(' || ch == '+' || ch == '-' || ch == '*' || ch == '/')
            {
                st.push(ch);
            }
            else
            {
                if (ch == ')')
                {
                    char top = st.top();
                    bool flag = true;
                    while (st.top() != '(')
                    {
                        if (top == '+' || top == '-' || top == '*' || top == '/')
                        {
                            flag = false;
                        }
                        st.pop();
                    }
                    if (flag == true)
                    {
                        return 1;
                    }
                    st.pop();
                }
            }
        }
        return 0;
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {

        string s;
        cin >> s;

        Solution obj;
        int res = obj.checkRedundancy(s);

        cout << res << endl;
    }
}

// } Driver Code Ends