bool checkString(char * s){
int activate=0;
        for(int i=0;s[i]!='\0';i++){
            if(s[i]=='b'){
                activate=1;
            }
            if(activate==1 && s[i]=='a'){
                return 0;
            }
        }
        return 1;
}