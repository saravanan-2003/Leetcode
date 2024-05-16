class Solution {
public:
    vector<int> numberGame(vector<int>& nums) {
        vector<int> temp;
        for(int j=0;j<nums.size();j++){
            for(int i=0;i<nums.size()-1;i++){
                if(nums[i]>nums[i+1]){
                    nums[i]=nums[i]^nums[i+1];
                    nums[i+1]=nums[i]^nums[i+1];
                    nums[i]=nums[i]^nums[i+1];
                }
            }
        }
        for(int i=0;i<(nums.size())-1;i+=2){
            nums[i]=nums[i]^nums[i+1];
            nums[i+1]=nums[i]^nums[i+1];
            nums[i]=nums[i]^nums[i+1];
        }
        return nums;
    }
};