
int reverse(int x){
    long int sum=0,rem;
    while(x!=0)
    {
        rem=x%10;
        sum=sum*10+rem;
        x=x/10;
    }
    if(sum>-2147483648 && sum<2147483647 )   
         return sum;
    else
        return 0;
}