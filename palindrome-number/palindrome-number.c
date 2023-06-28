bool isPalindrome(int x){
if(x<0){
    return false;
}
int temp=x;
long int add=0;
while(x){
    int rem=x%10;
    add=add*10+rem;
    x/=10;
}
if(temp==add){
    return true;
}
return false;
}