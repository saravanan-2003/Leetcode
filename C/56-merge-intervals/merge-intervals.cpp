class Solution {
private:
    void sortMatrixColumnWise(vector<vector<int>>& matrix) {
    sort(matrix.begin(), matrix.end(), [](const vector<int>& a, const vector<int>& b) {
        return a[0] < b[0];
    });
}
public:
    vector<vector<int>> merge(vector<vector<int>>& arr) {
        vector<vector<int>>ans;
        if(arr.size()==0){
            return ans;
        }
        sortMatrixColumnWise(arr);
        int low=arr[0][0];
        int high=arr[0][1];

        vector<int> temp;
        for(int i=0;i<arr.size();i++){
            if(low>=arr[i][0]){
                low=arr[i][0];
            }
            if(high>=arr[i][0] ){
                if(high<=arr[i][1]){
                    high=arr[i][1];
                }  
            }
            else{
                temp.push_back(low);
                temp.push_back(high);
                ans.push_back(temp);
                temp.clear();
                low=arr[i][0];
                high=arr[i][1]; 
                }
        }
        temp.push_back(low);
        temp.push_back(high);
        ans.push_back(temp);
        return ans;
    }
};