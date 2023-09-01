/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* applyOperations(int* nums, int numsSize, int* returnSize){

    int* arr=(int*)malloc(sizeof(int)*numsSize);
    int k=0;
    for(int i=0;i<numsSize-1;i++){
            if(nums[i]==nums[i+1]){
                nums[i]=nums[i]*2;
                nums[i+1]=0;
            }
    }
        for(int i=0;i<numsSize;i++){
            if(nums[i]!=0){
                arr[k++]=nums[i];
            }
        }
        for(int i=k;i<numsSize;i++){
            arr[k++]=0;
        }
        *returnSize=k;
        return arr;
}