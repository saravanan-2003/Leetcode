int* twoSum(int* nums, int numsSize, int target, int* returnSize){
    *returnSize=2;
    int sum=0;
    int *arr=malloc((*returnSize)*sizeof(int));
    for(int i=0;i<numsSize;i++){
        for(int j=i+1;j<numsSize;j++){
            if(nums[i]+nums[j]==target){
            arr[0]=i;
            arr[1]=j;
            break;
            }
        }
    }
 return arr;
}
