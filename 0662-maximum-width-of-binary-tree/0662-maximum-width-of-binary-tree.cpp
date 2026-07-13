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
    int widthOfBinaryTree(TreeNode* root) {
        queue<pair<TreeNode*,int>> q;
        q.push({root,0});
        int maxw=0;
        while(!q.empty()){
            int curls=q.size();
            unsigned long long  stid=q.front().second;
            unsigned long long  enid=q.back().second;
            maxw=max(maxw,(int)(enid-stid+1));
            for(int i=0;i<curls;i++){
                pair<TreeNode*,int> curr=q.front();
                unsigned long long idx=q.front().second;
                q.pop();
                if(curr.first->left){
                q.push({curr.first->left,2*idx+1});
                }
                if(curr.first->right){
                    q.push({curr.first->right,2*idx+2});
                }

            }
        }
        return maxw;
    }
};