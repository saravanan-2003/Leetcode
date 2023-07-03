void rotate(int** matrix, int matrixSize, int* matrixColSize){
    int row=matrixSize;
    int col=* matrixColSize;
    int k=0,temp;
    //transpose the row
    for(int i=0;i<row;i++){
        for(int j=0;j<k && j<col;j++){
            temp=matrix[i][j];
            matrix[i][j]=matrix[j][i];
            matrix[j][i]=temp;
        }
        k++;
    }
    //reverse the row
    for(int i=0;i<row;i++){
        k=1;
        for(int j=0;j<col/2;j++){
            temp=matrix[i][j];
            matrix[i][j]=matrix[i][col-k];
            matrix[i][col-k]=temp;
            k++;
        }
    }
}