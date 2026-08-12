class Solution {
public:
   set<vector<int>> s;
   void hp(vector<vector<int>>& ans,vector<int>& tp,int idx,vector<int>& arr){
    int n=arr.size();
    if(idx==n){
        if(s.find(tp)==s.end()){
        s.insert(tp);
        ans.push_back(tp);}
        return;
    }
    tp.push_back(arr[idx]);
    hp(ans,tp,idx+1,arr);
    tp.pop_back();
    hp(ans,tp,idx+1,arr);
   }
    vector<vector<int>> subsetsWithDup(vector<int>& arr) {
        vector<vector<int>> ans;
        vector<int> v;
        sort(arr.begin(),arr.end());
        s.clear();
        hp(ans,v,0,arr);
        //sort(ans.begin(),ans.end());
        return ans;
    }
};