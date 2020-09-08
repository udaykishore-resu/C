#include<stdio.h>
#include<stdlib.h>

int main(){
    int **ptr=(int **)malloc(sizeof(int*));
    ptr[0]=(int *)malloc(sizeof(int));
    ptr[1]=(int *)malloc(sizeof(int));
    ptr[0][0]=1;
    ptr[0][1]=2;
    ptr[0][2]=3;
    ptr[1][0]=4;
    ptr[1][1]=5;
    prt[1][2]=6;
    printf("ptr[0][0]:%d\n",ptr[0][0]);
    printf("ptr[0][1]:%d\n",ptr[0][1]);
    printf("ptr[0][2]:%d\n",ptr[0][2]);
    printf("ptr[1][0]:%d\n",ptr[1][0]);
    printf("ptr[1][1]:%d\n",ptr[1][1]);
    printf("ptr[1][2]:%d\n",ptr[1][2]);
    
    printf("*(*(ptr+0)+0):%d\n",*(*(ptr+0)+0)); 
    printf("*(*(ptr+0)+1):%d\n",*(*(ptr+0)+1)); 
    printf("*(*(ptr+0)+2):%d\n",*(*(ptr+0)+2)); 
    printf("*(*(ptr+1)+0):%d\n",*(*(ptr+1)+0)); 
    printf("*(*(ptr+1)+1):%d\n",*(*(ptr+1)+1)); 
    printf("*(*(ptr+1)+2):%d\n",*(*(ptr+1)+2)); 
    printf("**ptr:%d\n",**ptr);
}

