class Solution {
public:
    vector<int> twoOutOfThree(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3) {
        vector<int>v;
        set<int>s1(nums1.begin(),nums1.end());
        set<int>s2(nums2.begin(),nums2.end());
        set<int>s3(nums3.begin(),nums3.end());
        nums1.clear();
        nums2.clear();
        nums3.clear();

        for(auto i:s1){
            nums1.push_back(i);
        }
        for(auto i:s2){
            nums1.push_back(i);
        }
        for(auto i:s3){
            nums1.push_back(i);
        }
        sort(nums1.begin(),nums1.end());
        int count=0;
        for(int i=0;i<nums1.size()-1;i++){
            if(i!=0 && nums1[i]==nums1[i+1] && nums1[i-1]!=nums1[i+1]){
                v.push_back(nums1[i]);
            }
            else if(i==0 && nums1[i]==nums1[i+1]){
                v.push_back(nums1[i]);
            }
        }
        return v;
    }
};