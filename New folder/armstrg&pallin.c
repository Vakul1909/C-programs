#include <stdio.h>


// armstrong
 int main(){
    int n;
    printf("enter a number:");
    scanf("%d",&n);
    int newnum=0;
    int original=n;
    while(n>0){
        int lastdigit=n%10;
        newnum+=(lastdigit*lastdigit*lastdigit);
        n=n/10;
    }if(newnum==original){
        printf("number is armstrong");
    }else{
        printf("number is not armstrong");
    }
    return 0;
}  



// pallindrome
int main(){
    int n;
    printf("enter a number:");
    scanf("%d",&n);
    int newnum=0;
    int original=n;
    while(n>0){
        int lastdigit=n%10;
        newnum=newnum*10+lastdigit;
        n=n/10;
    }if(newnum==original){
        printf("number is pallindrome");
    }else{
        printf("number is not pallindrome");
    }
    return 0;
}