class Solution {
public:
    vector<int> twoSum(vector<int>& a, int target) {
        vector<int>v;
        for(int i=0;i<a.size();i++){
          for(int j=i+1;j<a.size();j++){
            if(a[i]+a[j]==target){
                v.push_back(i);
                v.push_back(j);
                break;
            }
          }
        }return v;
    }
   
    
};
