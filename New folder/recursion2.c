#include<stdio.h>
int fact(int n);
int main(){
    printf("factorial of number:%d",fact(5));
    return 0;
}
//recursive function
int fact(int n){
    if(n==1){
        return 1;
    }
    int firstnm1=fact(n-1);
    int totalfact=firstnm1*n;
    return totalfact;
}