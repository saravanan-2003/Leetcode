class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        vector<vector<int>>v;
        set<vector<int>>s;
        int target=0;
        int n=arr.size();
        
        for(int i=0;i<n;i++){
            int j=i+1;
            int k=n-1;
            while(j<k){
                int sum=arr[i]+arr[j]+arr[k];
                if(sum==target){
                    //printf("%d  %d   %d\n",arr[low],arr[high],arr[i]);
                    s.insert({arr[i],arr[j],arr[k]});
                    j++;
                    k--;
                }
                else if(sum<target){
                    j++;
                }
                else{
                    k--;
                }
            }        
        }
        for(auto trip : s){
            v.push_back(trip);
        }
        return v;
    }
};