char * addBinary(char * a, char * b){
    char* arr=(char*)malloc(sizeof(char)*10000);
    int k=0;
    char d,e,carry='0';
    int i=strlen(a)-1,j=strlen(b)-1;
    int flag=0;
    while(i>=0 && j>=0){
            d=a[i];
            e=b[j];
        if(d=='0' && e=='0'){
            if(carry=='0'){
            arr[k++]='0';
            carry='0';}
            else{
                arr[k++]='1';
                carry='0';
            }
            
        }
        else if(d=='0' && e=='1' || d=='1' && e=='0'){
            if(carry=='0')
            {
                arr[k++]='1';
                carry='0';
            }
            
            else{
                arr[k++]='0';
                carry='1';
            }
            
        }
        else if(d=='1' && e=='1'){
            if(carry=='0'){
                arr[k++]='0';
                carry='1';
            }
            else{
                arr[k++]='1';
                carry='1';
            }
            
        }
         i--;
         j--;
    }
    while(i>=0){
        if(a[i]=='1'){
            if(carry=='1'){
                arr[k++]='0';
                carry='1';
            }
            else{
                arr[k++]='1';
                carry='0';
            }
        }
        else{
            if(carry=='1'){
                arr[k++]='1';
                carry='0';
            }
            else{
                arr[k++]='0';
                carry='0';
            }
        }
        i--;
    }
    while(j>=0){
        if(b[j]=='1'){
            if(carry=='1'){
                arr[k++]='0';
                carry='1';
            }
            else{
                arr[k++]='1';
                carry='0';
            }
        }
        else{
            if(carry=='1'){
                arr[k++]='1';
                carry='0';
            }
            else{
                arr[k++]='0';
                carry='0';
            }
        }
        j--;
    }
    if(carry=='1'){
        arr[k++]='1';
    }
    arr[k++]='\0';
    int len, temp;  
    len = strlen(arr); 
    for (i = 0; i < len/2; i++)  
    {  
        temp = arr[i];  
        arr[i] = arr[len - i - 1];  
        arr[len - i - 1] = temp;  
    }  
    return arr;
}