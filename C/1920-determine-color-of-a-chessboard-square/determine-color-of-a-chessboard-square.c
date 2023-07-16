bool squareIsWhite(char * coordinates){
    
        if(coordinates[0]=='a'||coordinates[0]=='c'||coordinates[0]=='e'||coordinates[0]=='g'){
            if((coordinates[1]-'0')%2==0){
                return 1;
            }
            else{
                return 0;
            }
        }
        if((coordinates[1]-'0')%2==0){
                return 0;
            }
            return 1;
    
}