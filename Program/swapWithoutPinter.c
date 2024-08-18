#include<stdio.h>

int swap(int a,int b){

     int temp=0;
    temp=a;
    a=b;
    b=temp;
     return temp;
}

int main(){

    int a=10, b=20;
    swap(a,b);
    printf("After swapping: a=%d\n b=%d\n",a,b);
}