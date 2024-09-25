#include<stdio.h>
void swap(int a,int b);
int main(){
    int x=3,y=5;
    swap(x,y);
    printf("x=%d & y=%d",x,y);
    return 0; 
}
// call by values
void swap(int a,int b){
    int t= a;
    a=b;
    b=t;
    printf("a=%d & b=%d\n",a,b);
}
// this a second way for swapping number without using any other variable
// int main() 
// { 
  
//     int x = 10; 
//     int y = 20; 
  
//     printf("x: %d , y: %d\n", x, y); 
  
//     // Code to swap 'x' and 'y' 
//     x = x + y; 
//     y = x - y; 
//     x = x - y; 
  
//     printf("x: %d , y: %d\n", x, y); 
  
//     return 0; 
// }