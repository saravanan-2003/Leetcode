class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int>v;
        int mul=1;
        for(int i=0;i<nums.size();i++){
            mul=mul*nums[i];
        }
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                int tp=1;
                for(int j=0;j<nums.size();j++){
                    if(i!=j){
                        tp=tp*nums[j];
                    }
                }
                v.push_back(tp);
            }
            else if(mul==0){
                v.push_back(0);
            }
            else{
                v.push_back(mul/nums[i]);
            }
        }
        return v;
    }
};