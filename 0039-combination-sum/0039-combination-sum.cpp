class Solution {
public:
    void hp(vector<vector<int>>& ans,int sum,int tar,vector<int>& arr,int idx,vector<int> & v){
        int n=arr.size();
        if(sum==tar){
            ans.push_back(v);
            return;
        }
        if(idx==n||sum>tar){
            
            return;
            
        }
        v.push_back(arr[idx]);
        hp(ans,sum+arr[idx],tar,arr,idx,v);
        v.pop_back();
        hp(ans,sum,tar,arr,idx+1,v);
    }
    vector<vector<int>> combinationSum(vector<int>& arr, int target) {
        vector<vector<int>> ans;
        vector<int> v;

        hp(ans,0,target,arr,0,v);
        return ans;
    }
};