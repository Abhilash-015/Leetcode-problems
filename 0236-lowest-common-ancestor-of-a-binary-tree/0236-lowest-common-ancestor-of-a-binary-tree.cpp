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
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(root==NULL){return NULL;}
        if(root->val==p->val||root->val==q->val){return root;}
        TreeNode* lft=lowestCommonAncestor(root->left,p,q);
        TreeNode* rtt=lowestCommonAncestor(root->right,p,q);
        if(lft&&rtt){
            return root;
        }
        else if(lft!=NULL){
            return lft;
        }
        else{
            return rtt;
        }
    }
};