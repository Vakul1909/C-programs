
#include<stdio.h>
int main(){
    int n;
    do{
       printf("enter number:");
       scanf("%d",&n);
       printf("%d\n",n);

       if(n%2!=0){
           break;//it will terminate the program
       }    
    }while(1);
    printf("thank u");
    return 0;
}