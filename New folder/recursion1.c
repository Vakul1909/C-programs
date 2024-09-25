#include<stdio.h>
int sum(int n);
int main(){
    printf("sum of numbers:%d",sum(5));
    return 0;
}
//recursive function
int sum(int n){
    if(n==1){
        return 1;
    }
    int firstnm1=sum(n-1);
    int totalsum=firstnm1+n;
    return totalsum;
}