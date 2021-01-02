// https://leetcode.com/problems/maximum-depth-of-binary-tree/submissions/ (E)
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int maxDepth(TreeNode* root) {
        int depth = 0;
        depth = dfs(root, depth);
        return depth;
    }
    int dfs(TreeNode* root, int &depth)
    {
        if(root == NULL)
        {
            return 0;
        }
        int ldepth = dfs(root->left, depth);
        int rdepth = dfs(root->right, depth);
        if(ldepth > rdepth)
        {
            return ldepth +1;
        }
        else
        {
            return rdepth +1;
        }
    }
};
