char * mergeAlternately(char * word1, char * word2){
    
    int count=0,i=0;
    int k=0;
    int len1=0,len2=0;
    while(word1[i]!='\0'){
        len1++;
        i++;
    }i=0;
    while(word2[i]!='\0'){
        len2++;
        i++;
    }
    i=0;
    int len=len1+len2+1;
    //printf("%d %d",len1,len2);
    char* word=(char*)malloc(sizeof(char)*len);
    int p=0;
    if(len1<len2){
        
        for(int i=0;i<len1;i++,p++){
            word[k++]=word1[i];
            word[k++]=word2[i];
            //k++;
        }
        //printf("%d  %d",k,p);
        for(int i=p;i<len2;i++){
            word[k++]=word2[i];
        }
    } 
    else{
        printf("hii");
        
        for(int i=0;i<len2;i++,p++){
            printf("%d  %d\n",k,i);
            word[k++]=word1[i];
            word[k++]=word2[i];
        }
        
        for(int i=p;i<len1;i++){
            word[k++]=word1[i];
        }
    }
    word[k]='\0';
    return word;
}