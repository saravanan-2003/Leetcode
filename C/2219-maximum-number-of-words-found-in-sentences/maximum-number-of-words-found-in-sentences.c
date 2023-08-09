int mostWordsFound(char ** sentences, int sentencesSize){
    int maxi=0;
    for(int words=0;words<sentencesSize;words++){
        int count=0;
        for(int j=0;j<strlen(sentences[words]);j++){
            if(sentences[words][j]==' '){
                count++;
            }
        }
        if(count>maxi){
            maxi=count;
        }
    }
    return maxi+1;
}