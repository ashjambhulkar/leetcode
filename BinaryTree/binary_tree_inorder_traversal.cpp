//  Definition for a binary tree node.
//  struct TreeNode {
//  int val;
//  TreeNode *left;
//  TreeNode *right;
//  TreeNode(int x) : val(x), left(NULL), right(NULL) {}
//  };

class Solution
{
public:
  vector<int> inorderTraversal(TreeNode *root)
  {
    stack<TreeNode *> stack;
    vector<int> res;
    TreeNode *node = root;
    while (!stack.empty() || node)
    {
      if (node)
      {
        stack.push(node);
        node = node->left;
      }
      else
      {
        TreeNode *pnode = stack.top();
        res.push_back(pnode->val);
        stack.pop();
        node = pnode->right;
      }
    }
    return res;
  }
};