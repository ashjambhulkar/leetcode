// Definition for a binary tree node.
// struct TreeNode {
// int val;
// TreeNode *left;
// TreeNode *right;
// TreeNode(int x) : val(x), left(NULL), right(NULL) {}
// };

class Solution {
public:
    vector<int> postorderTraversal(TreeNode* root) {
      stack<TreeNode*> stack;
      vector<int> res;
      stack.push(root);
      while(!stack.empty()){
        TreeNode* node = stack.top();
        res.push_back(node->val);
        stack.pop();
        if(node->left){
          stack.push(node->left);
        }
        if(node->right){
          stack.push(node->right);
        }
      }
      reverse(res.begin(), res.end());
      return res;
    }
};