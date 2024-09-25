#include <stdio.h>
// Function to calculate HCF
int calculateHCF(int num1, int num2) {
    while (num1 != num2) {
        if (num1 > num2)
            num1 = num1- num2;
        else
            num2 = num2- num1;
    }
    return num1;
}
int main() {
    int num1, num2;
    // Input two numbers from the user
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);
    // Calculate and display the HCF
    int hcf = calculateHCF(num1, num2);
    printf("HCF of %d and %d is: %d\n", num1, num2, hcf);
    return 0;
}
