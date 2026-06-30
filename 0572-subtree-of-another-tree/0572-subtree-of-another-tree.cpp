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
        if(p==NULL||q==NULL){return p==q;}
        bool left=chk(p->left,q->left);
        bool right=chk(p->right,q->right);
        return left&&right&&p->val==q->val;
    }
    bool fn(TreeNode* root, TreeNode* subRoot){
        if(root==NULL){return false;}
        if(root->val==subRoot->val&&chk(root,subRoot)){
            return true;
        }
        bool left=fn(root->left,subRoot);
        bool right=fn(root->right,subRoot);
        return left||right;
    }
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        if(fn(root,subRoot)){return true;}
        return false;
    }
};