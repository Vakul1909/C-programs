#include<stdio.h>
int countname(char arr[]);
int main(){
    char name[100];
    fgets(name,100,stdin);
    printf("entered name is:%s",name);
    printf("length is:%d",countname(name));
    return 0;
}
int countname(char arr[]){
    int count=0;
    for(int i=0;arr[i]!='\0';i++){    // isme '/0' iska mtlb string mein iske baad koi value nhi h yehi last value hoti h string ki 
        count++;

    }return count-1;  // humne last mein -1 isleye kiya h kyuki woh '/0' isko bhi gin raha tha
}