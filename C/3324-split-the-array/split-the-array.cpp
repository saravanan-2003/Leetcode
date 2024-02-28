class Solution {
public:
    bool isPossibleToSplit(vector<int>& nums) {
        map<int,int>m;
        for(int i=0;i<nums.size();i++){
            m[nums[i]]++;
        }
        for(auto i:m){
            cout<<i.second;
            if(i.second>=3){
                return 0;
            }
        }
        return 1;
    }
};