#include<stdio.h>
 typedef struct address{
    int num;
    int block;
    char city[100];
    char state[100];
 }adr;
 void printAdd(adr add);
 int main(){
     adr adds[5];
     printf("address of first house:\n");
     printf("enter house no.:\n");
     scanf("%d",&adds[0].num);
     printf("enter house block.:\n");
     scanf("%d",&adds[0].block);
     printf("enter city:\n");
     scanf("%s",adds[0].city);
     printf("enter state:\n");
     scanf("%s",adds[0].state);
     printf("address of second house:\n");
     printf("enter house no.:\n");
     scanf("%d",&adds[1].num);
     printf("enter house block.:\n");
     scanf("%d",&adds[1].block);
     printf("enter city:\n");
     scanf("%s",adds[1].city);
     printf("enter state:\n");
     scanf("%s",adds[1].state);
     printf("address of third house:\n");
     printf("enter house no.:\n");
     scanf("%d",&adds[2].num);
     printf("enter house block.:\n");
     scanf("%d",&adds[2].block);
     printf("enter city:\n");
     scanf("%s",adds[2].city);
     printf("enter state:\n");
     scanf("%s",adds[2].state);
     printf("address of fourth house:\n");
     printf("enter house no.:\n");
     scanf("%d",&adds[3].num);
     printf("enter house block.:\n");
     scanf("%d",&adds[3].block);
     printf("enter city:\n");
     scanf("%s",adds[3].city);
     printf("enter state:\n");
     scanf("%s",adds[3].state);
     printf("address of fifth house:\n");
     printf("enter house no.:\n");
     scanf("%d",&adds[4].num);
     printf("enter house block.:\n");
     scanf("%d",&adds[4].block);
     printf("enter city:\n");
     scanf("%s",adds[4].city);
     printf("enter state:\n");
     scanf("%s",adds[4].state);     
     printAdd(adds[0]);
     printAdd(adds[1]);
     printAdd(adds[2]);
     printAdd(adds[3]);
     printAdd(adds[4]);
     return 0;
 }   
 void printAdd(adr add){
    printf("address is:%d,%d,%s,%s\n",add.num,add.block,add.city,add.state);
 }  