#include <stdio.h>
int main(){
    float price[3]; // we use array in this program by this we make only one variable in which all three values will be store
    printf("enter 3 prices:");
    scanf("%f", &price[0]);
    scanf("%f", &price[1]); // we can also use this code instead of 3-7 line == float price[]={100.0,200.0,300.0};
    scanf("%f", &price[2]);
    printf("price of 1:%f\n", price[0] + (0.18 * price[0]));
    printf("price of 2:%f\n", price[1] + (0.18 * price[1]));
    printf("price of 3:%f\n", price[2] + (0.18 * price[2]));
    return 0;}