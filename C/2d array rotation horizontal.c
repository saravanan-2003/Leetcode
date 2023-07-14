#include<stdio.h>
void swap(int* a,int* b){
    int temp=*a;
    *a=*b;
    *b=temp;
}
int main(){
    int arr[3][3]={
        {1,1,0},{1,0,1},{0,0,0}
    };
    for(int row=0;row<3;row++){
        for(int col=0;col<3;col++){
            printf("%d ",arr[row][col]);
        }
        printf("\n");
    }

    for(int row=0;row<3;row++){
        int start=0;
        int end=2;
        while(start<end){
            swap(&arr[row][start],&arr[row][end]);
            start+=1;
            end-=1;
        }
        int col=0;
        while(col!=3){
            arr[row][col]=!arr[row][col];
            col++;
        }
    }

    for(int row=0;row<3;row++){
        for(int col=0;col<3;col++){
            printf("%d ",arr[row][col]);
        }
        printf("\n");
    }

}
