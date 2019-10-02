// Given a binary tree, return the preorder traversal of its nodes' values.

//Example :

// Input : [ 1, null, 2, 3 ]
//Output : [ 1, 2, 3 ]


//  Definition for a binary tree node.
//  struct TreeNode
// {
//   int val;
//   TreeNode *left;
//   TreeNode *right;
//   TreeNode(int x) : val(x), left(NULL), right(NULL){}
// };

class Solution
{
public:
  vector<int> preorderTraversal(TreeNode *root)
  {
    stack<TreeNode *> st;
    vector<int> res;
    if (!root)
      return res;
    st.push(root);
    while (!st.empty())
    {
      TreeNode *node = st.top();
      res.push_back(node->val);
      st.pop();
      if (node->right != NULL)
      {
        st.push(node->right);
      }
      if (node->left != NULL)
      {
        st.push(node->left);
      }
    }
    return res;
  }
};