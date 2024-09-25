#include<stdio.h>
int main(){
    int age=10;
    int *ptr=&age;
    int **pptr=&ptr;
    printf("%d",**pptr);
}
//  isme pointer ke adress ko bhi kahi or box mein store karte h mtlb do box bnte h