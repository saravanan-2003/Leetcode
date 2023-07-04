class Solution {
public:
    int singleNumber(vector<int>& nums) {
        map<int,int>m;
        for(int i=0;i<nums.size();i++){
            m[nums[i]]++;
        }
        int num=0;
        map<int,int>::iterator it;
        for(it=m.begin();it!=m.end();it++){
            if(it->second==1){
                num=it->first;
                break;
            }
        }

        return num;
    }
};