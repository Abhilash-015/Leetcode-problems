class Solution {
public:
    bool judgeSquareSum(int c) {
        set<double> s;
        for(int i=0;i*i<=c;i++){
            s.insert(i*i);
        }
        for(int i=0;i*i<=c;i++){
            if(s.find(c-i*i)!=s.end()){return true;}
        }
        return false;
    }
};