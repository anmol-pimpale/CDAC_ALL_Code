#include<stdio.h>

void swap(int *a,int *b){

     int temp=0;
    temp=*a;
    *a=*b;
    *b=temp;
    //printf("a=%d,b=%d\n",*a,*b);
}

int main(){

    int a=10, b=20;
    swap(&a,&b);
    printf("After swapping: a=%d\n b=%d\n",a,b);
}