#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
    srand(time(0));
    int num=rand()%100+1;
    printf("number:%d",num);
    
    return 0;
}