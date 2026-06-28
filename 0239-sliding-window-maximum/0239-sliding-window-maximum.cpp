class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& a, int k) {
        int n=a.size();
        vector<int> ans;
        deque<int> dq;
        for(int i=0;i<k;i++){
            while(!dq.empty()&&a[i]>=a[dq.back()]){
                dq.pop_back();
            }
            dq.push_back(i);
        }
        ans.push_back(a[dq.front()]);
        for(int i=k;i<n;i++){
            int idx=i-k+1;
            while(!dq.empty()&&dq.front()<idx){
                dq.pop_front();
            }
            while(!dq.empty()&&a[i]>=a[dq.back()]){
                dq.pop_back();
            }
            dq.push_back(i);
            ans.push_back(a[dq.front()]);
        }
        return ans;}
};