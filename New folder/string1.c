#include<stdio.h>
void string(char arr[]);
int main(){
    char firstname[]="vakul";
    char lastname[]="mittal";
    string(firstname);
    string(lastname);
    return 0;       
}
void string(char arr[]){
    for(int i=0; arr[i]!='\0';i++){
        printf("%c",arr[i]);
    }
    printf("\n");
}