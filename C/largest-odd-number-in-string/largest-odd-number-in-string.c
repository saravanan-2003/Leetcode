char * largestOddNumber(char * num){
    int start=-1,last=-1;
        // for(int i=0;i<num.length();i++){
        //     if((num[i]-'0')%2!=0){
        //         start=i;
        //     }
        // }
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
            // large[1]='\0';
            return large;
        }
        if(start==last){
            large=num[start];
            large[1]='\0';
            return large;
        }
        
        // for(int i=0;i<=last;i++){
        //     large=large+num[i];
        // }
        return num;
}