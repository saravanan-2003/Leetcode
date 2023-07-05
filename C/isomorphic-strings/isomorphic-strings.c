bool isIsomorphic(char * a, char * b){
    int size_a=strlen(a);
    char* c=(char*)malloc(sizeof(char)*size_a);
    char* d=(char*)malloc(sizeof(char)*size_a);
    for(int i=0;i<size_a;i++){
        c[i]=a[i];
    }
    for(int i=0;i<size_a;i++){
        d[i]=b[i];
    }
    int size=size_a;
    int index = 0;
    for (int i = 0; i < size; i++) {
        int j;
        for (j = 0; j < i; j++) {
            if (a[i] == a[j])
                break;
        }
        if (j == i)
            a[index++] = a[i];
    }
     a[index] = '\0';
    size=size_a;
    index=0;
    for (int i = 0; i < size; i++) {
        int j;
        for (j = 0; j < i; j++) {
            if (b[i] == b[j])
                break;
        }
        if (j == i)
            b[index++] = b[i];
    }
     b[index] = '\0';
    int temp=index;
    size=size_a;
    for(int i=0;i<size;i++){
            int flag=0;
        for(int j=0;j<temp;j++){
            if(c[i]==a[j]&& b[j]==d[i]){
                flag=1;
            }
        }
        if(flag==0){
            return 0;
        }
    }
    return 1;
}