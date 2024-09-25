//write a program to add two number?
#include <stdio.h>

int main() {
    int num, sum = 0;

    printf("Enter the first number: ");
    scanf("%d", &num);
    sum += num;

    printf("Enter the second number: ");
    scanf("%d", &num);
    sum += num;

    printf("The sum of the two numbers is: %d\n", sum);

    return 0;
}