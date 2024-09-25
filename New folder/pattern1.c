// #include<stdio.h>
// #include<string.h>
// int main()
// {    
//     int i,j,n;
//     printf("Enter the number of rows for half pyramid: ");
//     scanf("%d",&n);
//         for(i=0;i<=n;i++){
//             for(j=1;j<=n-i;j++){
//                         printf("*");
//             }
//             printf("\n");
//         }
//     return 0;
// } 
#include<stdio.h>
#include<string.h>
int main()
{    
    int i,j,n;
    printf("Enter no. of rows for half pyramid: ");
    scanf("%d",&n);
        for(i=0;i<n;i++){
            for(j=1;j<=n-i;j++){
                printf("%d",j);
            }
            printf("\n");
        }
    return 0;
} 