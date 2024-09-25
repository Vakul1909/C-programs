#include<stdio.h>
#include<string.h>
int main(){
    char str1[100];
    printf("enter password:");
    scanf("%s",str1);
    char str2[]=("100\n");
    printf("new password:");
    strcat(str1,str2);
    puts(str1);
}
// salting is a process in which companies are add there secrete code to their employees password