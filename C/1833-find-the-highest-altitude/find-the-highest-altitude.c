int largestAltitude(int* gain, int gainSize) {
    int temp[gainSize+1];
    temp[0]=0;
    for(int i=0;i<gainSize;i++){
        temp[i+1]=temp[i]+gain[i];
    }
    // for(int i=0;i<gainSize+1;i++){
    //     printf("%d ",temp[i]);
    // }
    int i=0,max=-100;
    while(i<gainSize+1){
        if(temp[i]>max){
            max=temp[i];
        }
        i++;
    }
    return max;
}