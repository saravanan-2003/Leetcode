bool isPerfectSquare(int num){
    if(num==1) return 1;
    for(long long int i=0;i<=num/2;i++){
        if(i*i==num){
            return 1;
        }
        else if(i*i>num){
            return 0;
        }
    }
    return 0;
}