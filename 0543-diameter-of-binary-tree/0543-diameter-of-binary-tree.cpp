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
    int ans=0;
    int ht(TreeNode* root){
        if(root==NULL){return 0;}
        int lt=ht(root->left);
        int rt=ht(root->right);
        ans=max(ans,lt+rt);
        return max(lt,rt)+1;
    }
    int diameterOfBinaryTree(TreeNode* root) {
        ht(root);
        return ans;
    }
};