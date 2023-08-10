bool search(int* nums, int numsSize, int target){
    if(numsSize==1){
        if(target==nums[0]){
            return 1;
        }
        else{
            return 0;
        }
    }
    int start=0;
    int end=numsSize-1;
    int index=0;
    for(int i=0;i<numsSize-1;i++)
    {
        if(nums[i]>nums[i+1]){
            index=i+1;
        }
    }
    if(index==0){
        for(int i=0;i<numsSize;i++){
            if(nums[i]==target){
                return 1;
            }
        }
        return 0;
    }
    if(nums[end]>=target){
        for(int i=index;i<numsSize;i++)
        {
            if(target==nums[i]){
                return 1;
            }
        }
    }
    else{
        for(int i=0;i<index;i++)
        {
            if(target==nums[i]){
                return 1;
            }
        }
    }
    return 0;
}