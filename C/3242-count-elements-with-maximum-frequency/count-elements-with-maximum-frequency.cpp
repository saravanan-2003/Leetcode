class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
          map<int,int>m;
          for(int i=0;i<nums.size();i++){
              m[nums[i]]++;
          }
          int maxi=INT_MIN;
          for(auto i:m){
              if(i.second>maxi){
                  maxi=i.second;
              }
          }
          int count=0;
          for(auto i:m){
              if(i.second==maxi){
                  count=count+maxi;
              }
          }
return count;
    }
};