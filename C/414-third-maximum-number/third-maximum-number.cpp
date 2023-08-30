class Solution {
public:
    int thirdMax(vector<int>& nums) {
        set<int>s(nums.begin(),nums.end());
        vector<int>v(s.begin(),s.end());
        reverse(v.begin(),v.end());
        if(v.size()>=3){
            return v[2];
        }
        return v[0];
    }
};