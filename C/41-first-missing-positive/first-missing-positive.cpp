class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int index=1;
        set<int>s;
        for(int i=0;i<nums.size();i++){
            s.insert(nums[i]);
        }
        int count=0;
        while( count<nums.size()){
                if(!(s.find(index)!=s.end())){
                    return index;
            }
            index++;
            count++;
        }
        return index;
    }
};