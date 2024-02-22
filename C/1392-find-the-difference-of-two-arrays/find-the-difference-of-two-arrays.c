
int** findDifference(int* nums1, int nums1Size, int* nums2, int nums2Size, int* returnSize, int** returnColumnSizes){
    *returnSize=2;
    int* columnsize=(int*)malloc(2*sizeof(int));
    int* arr1=(int*)malloc(sizeof(int)*nums1Size);
    int* arr2=(int*)malloc(sizeof(int)*nums2Size);
    int** p=(int**)malloc(sizeof(int*)*2);
    int k1=0,k2=0;
    for(int i=0;i<nums1Size;i++){
        int flag=1;
        for(int j=0;j<k1;j++){
            if(nums1[i]==arr1[j]){
                flag=0;
            }
        }
        if(flag==1){
            arr1[k1++]=nums1[i];
        }
    }

    for(int i=0;i<nums2Size;i++){
        int flag=1;
        for(int j=0;j<k2;j++){
            if(nums2[i]==arr2[j]){
                flag=0;
            }
        }
        if(flag==1){
            arr2[k2++]=nums2[i];
        }
    }
    int* temp1=(int*)malloc(sizeof(int)*1000);
    int* temp2=(int*)malloc(sizeof(int)*1000);
    int c1=0,c2=0;
    for(int i=0;i<k1;i++){
        int flag=1;
        for(int j=0;j<k2;j++){
            if(arr1[i]==arr2[j]){
                flag=0;
            }
        }
        if(flag==1){
            temp1[c1++]=arr1[i];
        }
    }
    for(int i=0;i<k2;i++){
        int flag=1;
        for(int j=0;j<k1;j++){
            if(arr2[i]==arr1[j]){
                flag=0;
            }
        }
        if(flag==1){
            temp2[c2++]=arr2[i];
        }
    }
    columnsize[0]=c1;
    columnsize[1]=c2;
    
   p[0]=temp1;
   p[1]=temp2;
    *returnColumnSizes=columnsize;
    return p;
}