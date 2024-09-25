#include<stdio.h>
void check(char str[],char n);
int main(){
    char str[]=("hello word");    
    char n;
    printf("enter any character:");
    scanf("%c",&n);
    check("hello word",n);
    return 0;
}
void check(char str[],char n){
    for(int i=0;str[i]!='\0';i++){
        if(str[i]==n){
            printf("yes this is present");
            return;
        }
    }
    printf("not present");         
}