/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
bool* kidsWithCandies(int* candies, int candiesSize, int extraCandies, int* returnSize) {
    bool* arr=(bool*)malloc(sizeof(bool)*candiesSize);
    int maxi=candies[0],k=0;
    for(int i=0;i<candiesSize;i++){
        if(candies[i]>maxi){
            maxi=candies[i];
        }
    }
    for(int i=0;i<candiesSize;i++){
        if(extraCandies+candies[i]>=maxi){
            arr[k++]=1;
        }
        else{
            arr[k++]=0;
        }
    }
    *returnSize=candiesSize;
    return arr;
}