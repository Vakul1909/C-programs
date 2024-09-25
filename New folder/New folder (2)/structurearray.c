#include<stdio.h>
#include<string.h>
struct student{     // it is a structure function in c which is used to store varius types of datatypes in it
    char name[100];
    float cgpa;
    int roll;
};
int main(){
    //struct student IT[100];  //hum isme array ki help se various students ka data store kar skte h
    //strcpy(IT[0].name,"vakul");
    //IT[0].cgpa=9;
    //IT[0].roll=123;
    //printf("name of IT student:%s",IT[0].name);
     struct student IT ={"vakul",9,123};  //this is shortcut type method if we already know the values
     printf("name of IT student:%s\n",IT.name);
     struct student *ptr=&IT;    // we can also use pointer method for this
     printf("name of IT student:%s\n",(*ptr).name);
     printf("name of IT student:%s",ptr->name);  // if we dont want to use *ptr we can also use that arrow
    return 0;
}    