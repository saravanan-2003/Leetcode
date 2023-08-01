int arrangeCoins(int n){
    int i=1,count=0;
    while(n>0){
        if(n>=i){
            count++;
            n=n-i;
            i++;
        }
        else{
            break;
        }
    }
    return count;
}