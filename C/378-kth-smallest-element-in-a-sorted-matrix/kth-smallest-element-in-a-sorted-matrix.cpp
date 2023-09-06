class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        if(matrix[0].size()*matrix.size()==k){
            return matrix[matrix.size()-1][matrix[0].size()-1];
        }
        vector<int>v;
        int len=matrix[0].size()*matrix.size();
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[0].size();j++){
                v.push_back(matrix[i][j]);
            }
        }
        sort(v.begin(),v.end());
        return v[k-1];
    }
};