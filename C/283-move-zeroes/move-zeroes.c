void moveZeroes(int* nums, int numsSize){
    int* arr=(int*)malloc(sizeof(int)* numsSize);
    int k=0;
    int count=0;
    for(int i=0;i<numsSize;i++){
        if(nums[i]!=0){
            arr[k++]=nums[i];
        }
        else{
            count++;
        }
    }
    for(int i=numsSize-count;i<numsSize;i++){
        arr[k++]=0;
    }
    for(int i=0;i<numsSize;i++){
        nums[i]=arr[i];
    }
}