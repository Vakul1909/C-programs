#include<stdio.h>
#include<string.h>
struct student{     // it is a structure function in c which is used to store varius types of datatypes in it
    char name[100];
    float cgpa;
    int roll;
};
void printinfo(struct student s1); // is line ko sbse upar isleye nhi likha kyoki phir student define nhi hota phir
int main(){
     struct student s1={"vakul",9,123};
     printinfo(s1);
     return 0;
}  
void printinfo(struct student s1){
    printf("student name:%s",s1.name);
}  