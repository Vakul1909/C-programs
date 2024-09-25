// in this ternary search we have to split an array into three parts and than do as same as for binary
#include<stdio.h>
int ternary_search(int arr[],int r,int l,int key){
    while (r>=l){
         int mid1=l+(r-l)/3;
         int mid2=r-(r-l)/3;
         if(arr[mid1]=key){
            return mid1;
         }if(arr[mid2]=key){
            return mid2;
         }if(arr[mid1]>key){
             r= mid1-1;
         }else if(arr[mid2]<key){
             l= mid2+1;
         }else{
             l=mid1+1;
             r= mid2-1;
         }    
    } 
    return -1;
}
int main(){
    int arr[]={2,3,5,6,8,9,13,23,36,56};
    printf("the given set of numbers are:2,3,5,6,8,9,13,23,36,56\n");
    int key;
    printf("enter number to search:\n",key);
    scanf("%d",&key);
    int r=0;
    int l=9;
    int p=ternary_search(arr,r,l,key);
    printf("index of %d is %d:\n",key,p);   
}
// #include <stdio.h>
 
// // Function to perform Ternary Search
// int ternarySearch(int l, int r, int key, int ar[])
 
// {
//     while (r >= l) {
 
//         // Find the mid1 and mid2
//         int mid1 = l + (r - l) / 3;
//         int mid2 = r - (r - l) / 3;
 
//         // Check if key is present at any mid
//         if (ar[mid1] == key) {
//             return mid1;
//         }
//         if (ar[mid2] == key) {
//             return mid2;
//         }
 
//         // Since key is not present at mid,
//         // check in which region it is present
//         // then repeat the Search operation
//         // in that region
 
//         if (key < ar[mid1]) {
 
//             // The key lies in between l and mid1
//             r = mid1 - 1;
//         }
//         else if (key > ar[mid2]) {
 
//             // The key lies in between mid2 and r
//             l = mid2 + 1;
//         }
//         else {
 
//             // The key lies in between mid1 and mid2
//             l = mid1 + 1;
//             r = mid2 - 1;
//         }
//     }
 
//     // Key not found
//     return -1;
// }
 
// // Driver code
// int main()
// {
//     int l, r, p, key;
 
//     // Get the array
//     // Sort the array if not sorted
//     int ar[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
 
//     // Starting index
//     l = 0;
 
//     // end element index
//     r = 9;
 
//     // Checking for 5
 
//     // Key to be searched in the array
//     printf("enter value of key\n",key);
//     scanf("%d",&key);
 
//     // Search the key using ternarySearch
//     p = ternarySearch(l, r, key, ar);
 
//     // Print the result
//     printf("Index of %d is %d\n", key, p);
// }    