class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int a=0;
        for(int i=0;i<nums.size()-1;i++){
            a=nums[i]^nums[i+1];
            if(a==0){
                return nums[i];
            }
        }
        return a;
    }
};