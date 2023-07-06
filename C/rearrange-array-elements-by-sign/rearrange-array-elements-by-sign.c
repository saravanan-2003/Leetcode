/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* rearrangeArray(int* nums, int numsSize, int* returnSize){
    int* arr=(int*)malloc(sizeof(int)*numsSize);
    * returnSize=numsSize;
    int arr_pos=0,arr_neg=1;
    for(int i=0;i<numsSize;i++){
        if(nums[i]>=0){
            arr[arr_pos]=nums[i];
            arr_pos+=2;
        }
        else{
            arr[arr_neg]=nums[i];
            arr_neg+=2;
        }
    }
    return arr;
}