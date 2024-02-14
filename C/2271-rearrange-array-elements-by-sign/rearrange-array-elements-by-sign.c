/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* rearrangeArray(int* nums, int numsSize, int* returnSize) {
    int* arr=(int*)malloc(sizeof(int)*numsSize);
    int i=0,j=0,k=0;
    int flag_pos=1,flag_neg=0;
    while(i<numsSize && j<numsSize){
        if(nums[i]>=0 && flag_pos==1){
            arr[k++]=nums[i];
            flag_pos=0;
            flag_neg=1;
            i++;
        }
        else if(flag_pos==1 && nums[i]<0){
            i++;
        }
        
        if(nums[j]<0 && flag_neg==1){
            arr[k++]=nums[j];
            flag_neg=0;
            flag_pos=1;
            j++;
        }
        else if(flag_neg==1 && nums[j]>=0){
            j++;
        }
    }
    printf("%d %d",i,j);
    while(i<numsSize){
        if(nums[i]>=0){
            arr[k++]=nums[i];
        }
        i++;
    }
    while(j<numsSize){
        if(nums[j]<0){
            arr[k++]=nums[j];
            
        }j++;
    }
    * returnSize=numsSize;
    return arr;
}