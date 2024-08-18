#include<stdio.h>
union ExamScore
{
    int score;
    char grade;

};


int main(){

    union ExamScore student1;

    student1.score=85;
    printf("Exam score:%d\n",student1.score);

    student1.grade='A';
    printf("Exam score:%C\n",student1.grade);

    return 0;

    
    
}