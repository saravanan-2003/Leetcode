class Solution {
public:
    int countPairs(vector<int>& nums, int k) {
        int add=0,i=0;
        while(i<nums.size()){
            for(int j=i+1;j<nums.size();j++){
                if(nums[i]==nums[j]){
                    if((i*j)%k==0){
                        add++;
                    }
                }
            }
            i++;
        }
        return add;
    }
};