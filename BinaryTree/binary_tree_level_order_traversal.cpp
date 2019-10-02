// Definition for a binary tree node.
// struct TreeNode {
// int val;
// TreeNode *left;
// TreeNode *right;
// TreeNode(int x) : val(x), left(NULL), right(NULL) {}
// };

class Solution
{
public:
  vector<vector<int>> levelOrder(TreeNode *root)
  {
    int height = getHeight(root);
    vector<vector<int>> res(height);
    if (!root)
      return res;
    solution(res, root, 0);
    return res;
  }

  void solution(vector<vector<int>> &res, TreeNode *root, int level)
  {
    if (!root)
      return;
    res[level].push_back(root->val);
    solution(res, root->left, level + 1);
    solution(res, root->right, level + 1);
  }

  int getHeight(TreeNode *root)
  {
    if (!root)
      return 0;
    int left = getHeight(root->left);
    int right = getHeight(root->right);
    int height = (left > right ? left : right) + 1;
    return height;
  }
};