bool isSubsequence(char * s, char * t){
    int i=0,k=0;
    while(t[i]!='\0'){
        if(s[k]==t[i++]){
            k++;
        }
    }
    return k==strlen(s)?true:false;
}