char * toLowerCase(char * s){
    char* lowerletter=(char*)malloc(sizeof(char)*1000);
    int k=0;
    for(int i=0;s[i]!='\0';i++){
        if(s[i]>='A' && s[i]<='Z'){
            s[i]=s[i]+32;
        }
    }
    return s;
}