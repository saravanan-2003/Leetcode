void setZeroes(int** matrix, int matrixSize, int* matrixColSize){
    int flag;
        for(int i=0;i<matrixSize;i++){
            flag=0;
            for(int j=0;j<* matrixColSize;j++){
                if(matrix[i][j]==0){
                    for(int k=0;k<matrixSize;k++){
                        if(matrix[k][j]!=0){
                            matrix[k][j]=-99;
                        }
                    }
                    flag=1;
                }
            }
            if(flag){
                for(int j=0;j<* matrixColSize;j++){
                    matrix[i][j]=-99;
                }
            }
        }
        for(int i=0;i<matrixSize;i++){
            for(int j=0;j<* matrixColSize;j++){
                if(matrix[i][j]==-99){
                    matrix[i][j]=0;
                }
            }
        }
}