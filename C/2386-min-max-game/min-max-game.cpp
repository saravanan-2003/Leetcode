class Solution {
public:
    int minMaxGame(vector<int>& nums) {
        int flag=1;
        while(nums.size()!=1){
            vector<int>v;
            for(int i=0;i<nums.size();i+=2,flag+=1){
                if(flag%2==1)
                v.push_back(min(nums[i],nums[i+1]));

                else
                v.push_back(max(nums[i],nums[i+1]));
            }
            nums.clear();
            nums=v;
        }
        return nums[0];
    }
};