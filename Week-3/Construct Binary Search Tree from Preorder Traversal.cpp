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
public:
//     TreeNode* build(vector<int> preorder,int &index,int min,int max)
//     {
//         if(index==preorder.size()) return NULL;
        
//         int val=preorder[index];
//         if(val<min || val>max) return NULL;
        
//         TreeNode* root=new TreeNode(val);
//         index++;
        
//         build(preorder,index,min,val-1);
        
//         build(preorder,index,min+1,max);
        
//         return root;
//     }
    
//     TreeNode* buildTree(vector<int> preorder)
//     {
//         int index=0;
//         return build(preorder,&index,INT_MIN,INT_MAX);
//     }
        
        
    TreeNode* insert(TreeNode* root,int key){
        if(root==NULL){
            root=new TreeNode(key);
            
        }
        else if(root->val<key){
            root->right=insert(root->right,key);
        }
        else {
            root->left=insert(root->left,key);
        }
        
        return root;
    }
    int idx=0;
    TreeNode *bst(vector<int> &preorder, int parent_value = INT_MAX)
    {
        if (idx == preorder.size() || preorder[idx] > parent_value)
            return NULL;
        int current_value = preorder[idx++];
        TreeNode *temp = new TreeNode(current_value);
        temp->left = bst(preorder, current_value);
        temp->right = bst(preorder, parent_value);
        return temp;
    }
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        
        return bst(preorder);
        //TreeNode* root=buildTree(preorder);
        
        // TreeNode* root=NULL;        
        
        // int i,n=preorder.size();
        // for(i=0;i<n;i++){
        //     root=insert(root,preorder[i]);
        // }
        // return root;
    }
};
