/**
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned as *returnColumnSizes array.
 * Note: Both returned array and *columnSizes array must be malloced, assume caller calls free().
 */
int** sortTheStudents(int** score, int scoreSize, int* scoreColSize, int k, int* returnSize, int** returnColumnSizes){
int x=scoreSize;
int *y=scoreColSize;

    int** scoree = (int**)malloc(x * sizeof(int*));
    for (int i = 0; i < x; i++) {
        scoree[i] = (int*)malloc((*y) * sizeof(int));
    }

    // Set the column sizes
    *returnColumnSizes = (int*)malloc(x * sizeof(int));
    for (int i = 0; i < x; i++) {
        (*returnColumnSizes)[i] = (*y);
    }
     *returnSize = x;

    int temp=0,flag=0;
        for(int i=0;i<scoreSize;i++){
            flag=0;
            for(int j=i;j<scoreSize;j++){
                if(i!=j && score[i][k]<score[j][k]){
                    flag=1;
                    for(int col=0;col<*scoreColSize;col++){
                        temp=score[i][col];
                        score[i][col]=score[j][col];
                        score[j][col]=temp;
                    }
                }
            }
        }
        
        return score;
}