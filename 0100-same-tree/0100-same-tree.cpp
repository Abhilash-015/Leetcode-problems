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
    bool chk(TreeNode* p, TreeNode* q){
        if(q==NULL&&p==NULL){return true;}
       if(p!=NULL&&q!=NULL){ if(q->val==p->val){
            if(chk(p->left,q->left)&&chk(p->right,q->right)){
                return true;
            }
        }}
        return false;
    }
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if(chk(p,q)){return true;}
        return false;
    }
};