/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* sortedSquares(int* nums, int numsSize, int* returnSize) {
    int* arr=malloc(sizeof(int)*numsSize);
    int start=0,end=numsSize-1;
    for(int last=numsSize-1;last>=0;last--){
        if(abs(nums[start])>abs(nums[end])){
            arr[last]=nums[start]*nums[start];
            start++;
        }
        else
        {
            arr[last]=nums[end]*nums[end];
            end--;
        }
    }
    *returnSize=numsSize;
    return arr;
}