class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int>v1;
        vector<int>v2;
        for(int i=0;i<nums.size();i++){
            if(nums[i]<0){
                v2.push_back(nums[i]);
            }
            else{
                v1.push_back(nums[i]);
            }
        }
        vector<int>v;
        int k=0,l=0;
        for(int i=0;i<nums.size();i++){
            if(i%2==0){
                v.push_back(v1[k++]);
            }
            else{
                v.push_back(v2[l++]);
            }
        }
        return v;
    }
};