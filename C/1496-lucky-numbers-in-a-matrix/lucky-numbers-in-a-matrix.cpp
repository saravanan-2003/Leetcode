class Solution {
public:
    vector<int> luckyNumbers (vector<vector<int>>& matrix) {
        vector<int>v;
        int number,count_row,count_col;
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[i].size();j++){
                count_row=0,count_col=0;
                number=matrix[i][j];
                for(int k=0;k<matrix.size();k++){
                    if(number>=matrix[k][j]){
                        count_col++;
                    }
                }
                for(int k=0;k<matrix[i].size();k++){
                    if(number<=matrix[i][k]){
                        count_row++;
                    }
                }
                if(count_col==matrix.size() && count_row==matrix[i].size()){
                    v.push_back(number);
                }
            }
        }
        return v;
    }
};