bool searchMatrix(int** matrix, int matrixSize, int* matrixColSize, int target){
    for(int row=0;row<matrixSize;row++){
        for(int col=0;col<*matrixColSize;col++){
            if(matrix[row][col]==target){
                return 1;
            }
        }
    }
    return 0;
}