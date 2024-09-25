#include<stdio.h>
#include<string.h>
struct student{     // it is a structure function in c which is used to store varius types of datatypes in it
    char name[100];
    float cgpa;
    int roll;
};
int main(){
    struct student s1;       // agar hume user se values input nhi karani toh uske liye code toh yeh sab left wala nhi
    printf("enter name:");   // likhna bass right wale ki 3 line likhni h
    scanf("%s",s1.name);      // strcpy(s1.name,"vakul");
    printf("enter roll no.:");
    scanf("%d",&s1.roll);     // s1.roll=123;
    printf("enter cgpa:");
    scanf("%f",&s1.cgpa);     // s1.cgpa=9;
    printf("student name:%s\n",s1.name);
    printf("student roll no:%d\n",s1.roll);
    printf("student cgpa:%f\n", s1.cgpa);
    return 0;
}
https://drive.google.com/file/d/12ZcAtkdRG-eU5qT6dxtlHlLmcVAuygzy/view