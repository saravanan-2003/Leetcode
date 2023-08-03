class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        vector<string>v;
        int flag;
        for(int i=0;i<arr.size();i++){
             flag=1;
            for(int j=0;j<arr.size();j++){
                if(i!=j && arr[i]==arr[j]){
                    flag=0;
                    break;
                }
            }
            if(flag)
            v.push_back(arr[i]);
        }
        return v.size()<k?"":v[k-1];
    }
};