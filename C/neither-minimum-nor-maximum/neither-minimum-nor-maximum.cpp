class Solution {
public:
    int findNonMinOrMax(vector<int>& nums) {
        if(nums.size()<=2){
            return -1;
        }
        sort(nums.begin(),nums.end());
        vector<int>v;
        for(int i=1;i<nums.size()-1;i++){
            v.push_back(nums[i]);
        }
        
        if(nums.size()%2==0){
            return v[v.size()/2-1];
        }
        return v[v.size()/2];
    }
};