#include<stdio.h>
#include<string.h>    // it is the string library in which more fuction are stored
int main(){
    //char str[]=("vakul");
    //int name=strlen(str);  // this function is used to calculate the length of given str
    //printf("length is:%d",name); 
    char str1[100]=("vakul");
    char str2[]=("mittal");
    //strcpy(str2,str1);    // this function is used to change the str1 value to str2 value
    //strcat(str1,str2);    // this function is concatination function which join two char
    //puts(str1);
    printf("%d",strcmp(str1,str2));  // this function is used to compare which char is big or small in terms of 1 or 0
    return 0;
}