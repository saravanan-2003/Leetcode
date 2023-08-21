/**
 * Swap the values of two integers.
 *
 * @param a  Pointer to the first integer.
 * @param b  Pointer to the second integer.
 */
void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

/**
 * Delete the greatest value in each row of the given 2D array and calculate the sum of the remaining values.
 *
 * @param arr           The input 2D array.
 * @param gridSize      The number of rows in the array.
 * @param gridColSize   Pointer to the variable that stores the number of columns in the array.
 * @return              The sum of the remaining values in the array after deleting the greatest value in each row.
 */
int deleteGreatestValue(int** arr, int gridSize, int* gridColSize) {
    int row = gridSize;
    int col = *gridColSize;
    int i, j, k, max, sum = 0;

    // Sort each row in descending order
    for (i = 0; i < row; i++) {
        k = col;
        while (k--) {
            for (j = 0; j < col - 1; j++) {
                // Swap adjacent elements if they are in the wrong order
                if (arr[i][j] < arr[i][j + 1]) {
                    swap(&arr[i][j], &arr[i][j + 1]);
                }
            }
        }
    }

    // Find the maximum value in each column and calculate the sum of the remaining values
    for (i = 0; i < col; i++) {
        max = -1;
        for (j = 0; j < row; j++) {
            if (arr[j][i] > max) {
                max = arr[j][i];
            }
        }
        sum += max;
    }

    return sum;
}
