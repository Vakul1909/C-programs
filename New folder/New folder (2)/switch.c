#include<stdio.h>
int main(){
    int day;
    printf("enter day 1-7 -: ");
    scanf("%d",&day);
    switch(day){
        case 1 : printf("monday \n ");
                 break;

        case 2 : printf("tueday  ");
                 break;
        case 3 : printf("wednesday  ");
                 break;
        case 4 : printf("thrusday  ");
                 break;
        case 5 : printf("friday  ");
                 break;
        case 6 : printf("saturday  ");
                 break;
        case 7 : printf("sunday  ");
                 break;
        default: printf("invalid entry  ");      
    }
    return 0;
}
