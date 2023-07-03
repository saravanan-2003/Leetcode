class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int flag;
        for(int i=0;i<matrix.size();i++){
            flag=0;
            for(int j=0;j<matrix[i].size();j++){
                if(matrix[i][j]==0){
                    for(int k=0;k<matrix.size();k++){
                        if(matrix[k][j]!=0){
                            matrix[k][j]=-99;
                        }
                    }
                    flag=1;
                }
            }
            if(flag){
                for(int j=0;j<matrix[i].size();j++){
                    matrix[i][j]=-99;
                }
            }
        }
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[i].size();j++){
                if(matrix[i][j]==-99){
                    matrix[i][j]=0;
                }
            }
        }
    }
};