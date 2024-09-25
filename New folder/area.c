// #include<stdio.h>
// int main() {
//     float radius;
//     printf("enter radius:");
//     scanf("%f",&radius);
//     printf("area is:%.1f",3.14*radius*radius);// we put " .1 " before f becoz we want only one place after decimal
//     return 0;
// }
#include <stdio.h>
#include <conio.h>
void main()
{
    float a[2][2], b[2][2], c[2][2];
    int i, j;
    // clrscr();
    printf("Entertheelementsof1stmatrix\n");
    /* Reading two dimensional Array with the help of two for loop. If there is an array of 'n'
    dimension,'n'numbersofloopsareneededforinsertingdatatoarray.*/
    for (i = 0; i < 2; i++)
        for (j = 0; j < 2; j++)
        {
            scanf("%f", &a[i][j]);
        }
    printf("Entertheelementsof2ndmatrix\n");
    for (i = 0; i < 2; i++)
        for (j = 0; j < 2; j++)
        {
            scanf("%f", &b[i][j]);
        }
    /*accessingcorrespondingelementsoftwoarrays.*/
    for (i = 0; i < 2; i++)
        for (j = 0; j < 2; j++)
        {
            c[i][j] = a[i][j] + b[i][j]; /*Sumofcorrespondingelementsoftwoarrays.*/
        }
    /*Todisplaymatrixsuminorder.*/
    printf("\nSumOfMatrix:");
    for (i = 0; i < 2; ++i)
    {
        for (j = 0; j < 2; ++j)
            printf("%f", c[i][j]);
        printf("\n");
    }
    getch();
}
