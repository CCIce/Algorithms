/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
    
    void dfs(vector<string>& res, TreeNode* node, string str)
    {
        if(!node->right && !node->left)
        {
            res.push_back(str);
            return;
        }
            // res.push_back(res);
        if(node->left) dfs(res, node->left, str + "->" + to_string(node->left->val));
        if(node->right)    dfs(res, node->right, str + "->" + to_string(node->right->val));
    }
public:
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> res;
        
        if(!root)   return res;
        
        dfs(res, root, to_string(root->val));
        return res;
    }
};