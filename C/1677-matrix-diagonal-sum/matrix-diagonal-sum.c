int diagonalSum(int** mat, int matSize, int* matColSize){
    int sum=0;
    for(int i=0;i<matSize;i++){
        for(int j=0;j<*matColSize;j++){
            if(i==j||i+j==matSize-1){
                sum=sum+mat[i][j];
            }
            // if(i==j && i+j==matSize-1){
            //     sum=sum-mat[i][j];
            // }
        }
    }
    return sum;
}