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
    int ht(TreeNode* root){
        if(root==NULL){return 0;}
        int lt=ht(root->left);
        int rt=ht(root->right);
        return max(lt,rt)+1;
    }
    int diameterOfBinaryTree(TreeNode* root) {
        if(root==NULL){return 0;}
        int lft=diameterOfBinaryTree(root->left);
        int rtt=diameterOfBinaryTree(root->right);
        int curr=ht(root->left)+ht(root->right);
        return max(lft,max(rtt,curr));
    }
};