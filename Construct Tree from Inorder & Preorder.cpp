//{ Driver Code Starts
//

#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node *left;
    struct Node *right;

    Node(int x)
    {
        data = x;
        left = NULL;
        right = NULL;
    }
};

void printPostOrder(Node *root)
{
    if (root == NULL)
        return;
    printPostOrder(root->left);
    printPostOrder(root->right);
    cout << root->data << " ";
}

// } Driver Code Ends

/*Complete the code here.
Node is as follows:
struct Node
{
  int data;
  Node* left;
  Node* right;
};
*/
class Solution
{
public:
    int position(int inorder[], int ele, int n)
    {
        for (int i = 0; i < n; i++)
        {
            if (inorder[i] == ele)
            {
                return i;
            }
        }
        return -1;
    }
    Node *solve(int preorder[], int inorder[], int &idx, int s, int e, int n)
    {
        if (idx >= n || s > e)
        {
            return NULL;
        }
        int ele = preorder[idx++];
        Node *root = new Node(ele);
        int pos = position(inorder, ele, n);

        root->left = solve(preorder, inorder, idx, s, pos - 1, n);
        root->right = solve(preorder, inorder, idx, pos + 1, e, n);

        return root;
    }
    Node *buildTree(int inorder[], int preorder[], int n)
    {
        // Code here
        int idx = 0;
        Node *ans = solve(preorder, inorder, idx, 0, n - 1, n);
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

        int inorder[n], preorder[n];
        for (int i = 0; i < n; i++)
            cin >> inorder[i];
        for (int i = 0; i < n; i++)
            cin >> preorder[i];
        Solution obj;
        Node *root = obj.buildTree(inorder, preorder, n);
        printPostOrder(root);
        cout << endl;
    }
}

// } Driver Code Ends