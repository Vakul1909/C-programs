#include<stdio.h>
int main() {
    int n = 5;
    for (int i = 1; i <= n; i++) {
        // Print spaces
        for (int j = 1; j <=n-i; j++) 
            printf(" ");
        // Print asterisks for the first half
        for (int j = 1; j <2*i; j++) 
            printf("*");        
        printf("\n");
    }
    return 0;
}
