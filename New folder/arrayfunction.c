#include<stdio.h>
void printnumbers(int arr[],int n);
int main(){
    int arr[]={2,3,4,5,6,7};
    int n=6;
    printnumbers(arr,n);
}
void printnumbers(int arr[],int n){
    for(int i=0;i<6;i++){
    printf("%d\t",arr[i]);}}//  \t it is used to give space in a row