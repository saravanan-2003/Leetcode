class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        //set<string>s1(arr.begin(),arr.end());
        //arr.clear();
        // for(auto i:s1){
        //     arr.push_back(i);
        // }
        vector<string>v;
        for(int i=0;i<arr.size();i++){
            int flag=0;
            for(int j=0;j<arr.size();j++){
                if(i!=j && arr[i]==arr[j]){
                    flag=1;
                    break;
                }
            }
            if(flag==0){
                v.push_back(arr[i]);
            }
        }
        if(v.size()<k){
            return "";
        }
        return v[k-1];
    }
};