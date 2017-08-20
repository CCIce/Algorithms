/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 
// dfs+hash
class Solution {
public:
    bool findTarget(TreeNode* root, int k) {
        unordered_set<int> set;
        return dfs(root, set, k);
		
       
    }  
   
    bool dfs(TreeNode* node, unordered_set<int>& set, int k)
    {
        if(node == NULL) return false;
        if(set.count(k - node->val)) return true;
        else    set.insert(node->val);
        return dfs(node->left, set, k) || dfs(node->right, set, k);
        
    }
};


// bfs+queue+hash

bool findTarget(TreeNode* root, int k) {
        unordered_set<int> s;
        return dfs(root, s, k);
		
        unordered_set<int> set;
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty())
        {
            TreeNode* node = q.front();
            q.pop();
            if(node == NULL) continue;
            if(set.count(k - node->val))
                return true;
            else
            {
                set.insert(node->val);
                q.push(node->left);
                q.push(node->right);
            }
                
        }
        return false;
    }