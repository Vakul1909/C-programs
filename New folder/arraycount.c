#include<stdio.h>
int countodd(int arr[],int n);// in this program we count the odd no. quantity from a array
int main(){
    int arr[]={2,5,7,8,9,9};
    printf("%d", countodd(arr,6));
    return 0;
}
int countodd(int arr[],int n){
    int count=0;
    for(int i=0;i<6;i++){
        if (arr[i]%2!=0){
            count++;

        }
    }
    return count;
}