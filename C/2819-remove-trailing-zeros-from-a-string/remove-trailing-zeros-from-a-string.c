char * removeTrailingZeros(char * num){
    for(int i=strlen(num)-1;i>=0;i--){
        if(num[i]=='0'){
            num[i]='\0';
        }
        else{
            break;
        }
    }
    return num;
}