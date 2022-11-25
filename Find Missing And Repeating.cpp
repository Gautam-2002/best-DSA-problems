//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution
{
public:
    int *findTwoElement(int *arr, int n)
    {
        // code here
        int xor1;       // to hold xor of all elements and int from 1 to n;
        int set_bit_no; // will have single set bit of xor1;
        int i, x = 0, y = 0;
        xor1 = arr[0];
        // get xor of all arr elements;
        for (i = 1; i < n; i++)
        {
            xor1 ^= arr[i];
        }
        for (i = 1; i <= n; i++)
        {
            xor1 ^= i;
        }
        // get the rightmost set bit in set_bit_no;
        set_bit_no = xor1 & ~(xor1 - 1);
        // Now divide elements into two
        // sets by comparing a rightmost set
        // bit of xor1 with the bit at the same
        // position in each element. Also,
        // get XORs of two sets. The two
        // XORs are the output elements.
        // The following two for loops
        // serve the purpose
        for (i = 0; i < n; i++)
        {
            if (arr[i] & set_bit_no)
                /* arr[i] belongs to first set */
                x = x ^ arr[i];

            else
                /* arr[i] belongs to second set*/
                y = y ^ arr[i];
        }
        for (i = 1; i <= n; i++)
        {
            if (i & set_bit_no)
                /* i belongs to first set */
                x = x ^ i;

            else
                /* i belongs to second set*/
                y = y ^ i;
        } /* x and y hold the desired
             output elements */
          // int p=-1;
          // for(i=0;i<n;i++){
          //     if(arr[i]==x)
          //         p=1;
          // }
          // vector<int> ans;
          // if(p==1){
          //     ans.push_back(x);
          //     ans.push_back(y);
          // }
          // else{
          //     ans.push_back(y);
          //     ans.push_back(x);
          // }
          // return ans;
        // long long int s1=0,s2=0,s3=0,s4=0;
        // for(int i=1;i<=n;i++){
        //     s1+=i;
        //     s2+=arr[i-1];
        //     s3+=(i*i);
        //     s4+=(arr[i-1]*arr[i-1]);
        // }
        // long long int a = abs(s1-s2);
        // long long int b = abs(s3-s4);
        // b/=a;
        // long long int x = (a+b)/2;
        // long long int y = abs(a-x);
        int p = 0, q = 0;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] == x)
            {
                p = x;
            }
            if (arr[i] == y)
            {
                p = y;
            }
        }
        q = p == x ? y : x;
        int result[2] = {(int)p, (int)q};
        int *ans = result;
        return ans;
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.findTwoElement(a, n);
        cout << ans[0] << " " << ans[1] << "\n";
    }
    return 0;
}
// } Driver Code Ends