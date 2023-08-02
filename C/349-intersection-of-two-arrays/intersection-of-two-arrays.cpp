class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        set<int>s1(nums1.begin(),nums1.end());
        set<int>s2(nums2.begin(),nums2.end());
        vector<int>v;
        nums1.clear();
        nums2.clear();
        for(auto i:s1){
            nums1.push_back(i);
        }
        for(auto i:s2){
            nums2.push_back(i);
        }
        for(int i=0;i<nums1.size();i++){
            for(int j=0;j<nums2.size();j++){
                int key=nums2[j];
                if(std::find(nums1.begin(), nums1.end(), key) != nums1.end()){
                    v.push_back(nums2[j]);
                }
            }
            
        }
        set<int>s3(v.begin(),v.end());
        v.clear();
        for(auto i:s3){
            v.push_back(i);
        }
        return v;
    }
};