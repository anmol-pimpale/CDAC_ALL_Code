#include<stdio.h>
#include<string.h>

struct Book
{
    char title[50];
    char author[50];
    int year;

};


int main(){

struct Book library[3];

strcpy(library[0].title,"The secret");
strcpy(library[0].author,"Rhonda Byrne");
library[0].year=2006;

strcpy(library[0].title,"Five Am Club");
strcpy(library[0].author,"Robbin Sharma");
library[0].year=2018;

strcpy(library[0].title,"Reach Dad Poor Dad");
strcpy(library[0].author,"Roburt kiyosaki");
library[0].year=1997;

for (int i = 0; i < 3; i++)
{
    printf("Book %d\n",i+1);
    printf("Title :%s\n",library[i].title);
    printf("Author :%s\n",library[i].author);
    printf("Year :%d\n",library[i].year);
    
}




    return 0;
}