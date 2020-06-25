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
    
    int maxsum(TreeNode* root,int &mx)
    {
        if(root==0) return 0;
        
        int left=maxsum(root->left,mx);
        int right=maxsum(root->right,mx);
        
        int max1=max(max(left,right)+root->val,root->val);
        int max2=max(max1,left+right+root->val);
        mx=max(mx,max2);
        
        return max1;
        
    }
    
    int maxPathSum(TreeNode* root) {
        
        int mx=INT_MIN;
        maxsum(root,mx);
        return mx;
        
    }
};
