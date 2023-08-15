class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        if(arr.size()==1){
            return {-1};
        }
        if(arr.size()==2){
            return {arr[1],-1};
        }
        int max;
        vector<int>v;
        max=*max_element(arr.begin()+1, arr.end());
        for(int i=0;i<arr.size()-1;i++){
            
            if(max!=arr[i]){
                v.push_back(max);
                    continue;
            }
            max=-1;
            for(int j=i+1;j<arr.size();j++){
                if(arr[j]>arr[j+1] && arr[j]>max){
                    max=arr[j];
                }
            }
            v.push_back(max);
        }
        v.push_back(-1);
        return v;
    }
};