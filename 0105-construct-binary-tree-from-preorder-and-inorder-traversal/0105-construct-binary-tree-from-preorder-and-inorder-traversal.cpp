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
    int srch(vector<int> & in,int tar,int lt,int rt){
        for(int i=0;i<in.size();i++){
            if(tar==in[i]){return i;}
        }
        return -1;
    }
    TreeNode* help(vector<int>& preorder, vector<int>& inorder,int lt,int rt,int & preidx){
        if(lt>rt){return NULL;}
        TreeNode* root=new TreeNode(preorder[preidx]);
        int inidx=srch(inorder,preorder[preidx],lt,rt);
        preidx++;
        root->left=help(preorder,inorder,lt,inidx-1,preidx);
        root->right=help(preorder,inorder,inidx+1,rt,preidx);
        return root;
    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int preidx=0;
        return help(preorder,inorder,0,inorder.size()-1,preidx);
    }
};