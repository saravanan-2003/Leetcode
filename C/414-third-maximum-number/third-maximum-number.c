int thirdMax(int* nums, int numsSize){
    for(int i=0;i<numsSize;i++){
        for(int j=0;j<numsSize-1;j++){
            if(nums[j]<nums[j+1]){
                int temp=nums[j];
                nums[j]=nums[j+1];
                nums[j+1]=temp;
            }
        }
    }
    if(numsSize<3){
        return nums[0];
    }
int count=0;
    for(int i=1;i<numsSize;i++){
        if(nums[i-1]!=nums[i]){
            count++;
        }
        if(count==2 ){
            return nums[i];
        }
    }
return nums[0];
}