#include<stdio.h>
int fabo(int n);
int main(){
    int n;
    printf("enter number:");
    scanf("%d",&n);
    printf("%d",fabo(n));
    return 0;
}
int fabo(int n){
    if(n==0){
        return 0;
    }if(n==1){
        return 1;
    }
    int fnm1=fabo(n-1);
    int fnm2=fabo(n-2);
    int fbn=fnm1+fnm2;
    printf("fibonacci of %d:%d\n",n,fbn);
    return fbn;
}