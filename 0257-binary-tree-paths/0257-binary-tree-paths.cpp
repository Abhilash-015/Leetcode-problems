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
    void fn(TreeNode* root,vector<vector<int>> &ans,vector<int>& seq){
        if(root==NULL){return ;}
        if(root->right==NULL&&root->left==NULL){
            
            seq.push_back(root->val);
            ans.push_back(seq);
            seq.pop_back();
            return;}
        seq.push_back(root->val);
        fn(root->left,ans,seq);
        fn(root->right,ans,seq);
        seq.pop_back();
        return ;
    }
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<vector<int>> ans;
        vector<int> seq;
        fn(root,ans,seq);
        vector<string> anss;
        for(int i=0;i<ans.size();i++){
            string s="";
            int n=ans[i].size();
            for(int j=0;j<n;j++){
                s+=to_string(ans[i][j]);
                if(j!=n-1){s+="->";}
            }
            anss.push_back(s);
        }
        return anss;
    }
};