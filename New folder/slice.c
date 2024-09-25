// #include<stdio.h>
// #include<string.h>
// void slice(char str[],int n,int m);
// int main(){
//     char str[100];
//     printf("enter something:");
//     scanf("%[^\n]",str);
//     slice(str,2,8);
// }
// void slice(char str[], int n, int m){
//     char str2[100];
//     int j=0;
//     for(int i=n,j=0;i<=m;i++,j++){  // in this slicing means cutting of string into following parts on basis of indexes 
//          str2[j]=str[i];
//     }
//     str2[j]='\0';
//     puts(str2);
   
// }
#include <stdio.h>
#include <string.h>
void slice(char str[], int n, int m);
int main() {
    char str[100];
    printf("Enter something: ");
    scanf(" %s", str); // Use %[^\n] to read the whole line
    slice(str, 2, 8);
    return 0;
}
void slice(char str[], int n, int m) {
    char str2[100];
    int j = 0;
    for (int i = n; i <= m; i++, j++) {
        str2[j] = str[i];
    }
    str2[j] = '\0';
    puts(str2);
}
