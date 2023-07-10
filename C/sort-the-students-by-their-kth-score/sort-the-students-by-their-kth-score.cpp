class Solution {
public:
    vector<vector<int>> sortTheStudents(vector<vector<int>>& score, int k) {
        int temp=0,flag=0;
        for(int i=0;i<score.size();i++){
            flag=0;
            for(int j=i;j<score.size();j++){
                if(i!=j && score[i][k]<score[j][k]){
                    flag=1;
                    for(int col=0;col<score[i].size();col++){
                        temp=score[i][col];
                        score[i][col]=score[j][col];
                        score[j][col]=temp;
                    }
                }
            }
            // if(flag==0){
            //     break;
            // }
        }
        return score;
    }
};