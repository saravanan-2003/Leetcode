char * largestOddNumber(char * num){
    int start=-1,last=-1;
        for(int i=strlen(num)-1;i>=0;i--){
            if((num[i]-'0')%2!=0){
                last=i;
                break;
            }
            else{
                num[i]='\0';
            }
        }
        char* large=malloc(sizeof(char)*100);
        if(start==-1 && last==-1){
             large[0]='\0';
            return large;
        }
        if(start==last){
            large=num[start];
            large[1]='\0';
            return large;
        }
        return num;
}