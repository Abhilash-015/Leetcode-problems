class Solution {
public:
    int maxSubarrayLength(vector<int>& arr, int k) {
        int n=arr.size();
        int lo=0;
        int ans=0;
        unordered_map<int,int> map;
        for(int i=0;i<n;i++){
            if(map.find(arr[i])==map.end()){
                map[arr[i]]=1;
            }
            else{
                map[arr[i]]++;
            }
            while(map[arr[i]]>k){
                map[arr[lo]]--;
                lo++;
            }
            ans=max(ans,i-lo+1);
        }
        return ans;
    }
};