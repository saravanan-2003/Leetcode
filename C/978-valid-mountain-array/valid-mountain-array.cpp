class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        if(arr.size()<=2){
            return 0;
        }
        int less=0;
        for(int i=0;i<arr.size()-1;i++){
            if(arr[i]==arr[i+1]){
                return false;
            }
            else if(arr[i]>arr[i+1]){
                less=i;
                break;
            }
        }
        if(less==0){
            return 0;
        }
        for(int j=less+1;j<arr.size()-1;j++){
            if(arr[j]==arr[j+1]){
                return 0;
            }
            else if(arr[j]<arr[j+1]){
                return 0;
            }
        }
        
        return 1;
    }
};