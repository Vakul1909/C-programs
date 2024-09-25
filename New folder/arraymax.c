#include <stdio.h>
// Function to find the largest number in an array
int findLargest(int arr[100], int size) {
    // Initialize the largest number with the first element of the array
    int largest = arr[0];
    // Iterate through the array to find the largest number
    for (int i = 1; i < size; i++) {
        if (arr[i] > largest) {
            largest = arr[i];
        }
    }
    return largest;
}
int main() {    
    int arr[]={10,20,30,45,23,42};  
    int size = sizeof(arr) / sizeof(arr[0]);
    // Call the function to find the largest number
    int largest = findLargest(arr, size);
    // Display the result
    printf("The largest number in the array is: %d\n", largest);
    return 0;
}
