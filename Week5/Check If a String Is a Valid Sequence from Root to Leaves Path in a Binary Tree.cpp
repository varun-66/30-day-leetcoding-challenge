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
    bool inorder(TreeNode* root,vector<int>& arr,int i)
    {
        if(i==arr.size()-1)
        {
            if(root==0) return false;
            if(root->val==arr[i] && root->left==0 && root->right==0) return true;
            return false;
        }
        
        if(root==0) return false;
        
        if(root->val==arr[i]){
            return inorder(root->left,arr,i+1) || inorder(root->right,arr,i+1);
        }
        return false;
    }
    bool isValidSequence(TreeNode* root, vector<int>& arr) {
        int i,n=arr.size();
        
        return inorder(root,arr,0);
    
    }
};
