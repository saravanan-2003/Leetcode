class Solution {
public:
    int oddCells(int m, int n, vector<vector<int>>& indices) {
        vector<vector<int>>v(m,vector<int> (n,0));
        
        for(int i=0;i<indices.size();i++){
                int index1=indices[i][0];
                int index2=indices[i][1];
                for(int j=0;j<m;j++)
                {
                v[j][index2]+=1;
                }
                for(int k=0;k<n;k++)
                {
                v[index1][k]+=1;
                }
            
        }
        int count=0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(v[i][j]%2!=0){
                    count++;
                }
            }
        }
        return count;
    }
};