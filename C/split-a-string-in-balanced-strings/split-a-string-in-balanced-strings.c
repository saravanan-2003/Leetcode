int balancedStringSplit(char * s){
    int balance_string=0,count_r=0,count_l=0;
    for(int i=0;s[i]!='\0';i++){
        if(s[i]=='R')
            count_r+=1;
        else
            count_l+=1;
        if(count_r==count_l){
            balance_string+=1;
            count_r=0;
            count_l=0;
        }
    }
    return balance_string;
}