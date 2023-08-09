/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* createTargetArray(int* nums, int numsSize, int* index, int indexSize, int* returnSize){
    int* arr=(int*)malloc(sizeof(int)*10000);
    *returnSize=numsSize;
    int k=0;
    for(int i=0;i<numsSize;i++){
        arr[k++]=-1;
    }
    int r=0;
    for(int i=0;i<indexSize;i++){
        if(arr[index[i]]==-1){
            arr[r++]=nums[i];
        }
        else{
            for(int j=r+1;j>index[i];j--){
                arr[j]=arr[j-1];
            }
            arr[index[i]]=nums[i];
            r++;
        }
    }
    return arr;
}