#include<stdio.h>
#include<string.h>
 typedef struct student{    // here we use typedef function for nickname 
    char name[100];
    float cgpa;
    int roll;
}stu;   // here we provide the nickname called 'alias'
int main(){
     stu s1;
     s1.roll=123;
     printf("student roll no.:%d",s1.roll);
}  