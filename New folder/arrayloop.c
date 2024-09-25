#include<stdio.h>
int main(){// in this programm we first of all insert values in indexes than we take output of that index values which we are insert before
     int aadhar[5];
     //input
     int *ptr=&aadhar[0];
     for(int i=0;i<5;i++){
        printf("%d index:",i);
        scanf("%d",&aadhar[i]);
     }
     //output
     for(int i=0;i<5;i++){
      printf("%d index=%d\n",i,aadhar[i]);
     }
     return 0;
}     