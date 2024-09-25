#include<stdio.h>
int main(){
    int agee=23;
    int aa = 22;
    int*ptr=&agee;//isme usne age ki location ek ptr naam ke box mein daldi
    int *ptrr=&aa;
    printf("%d", ptrr);
    int _age=*ptr;//isme usne yeh dekha ki jo bhi value ptr ke andar h woh kiski location h phir jiski location h uski value ek naye box mein shift krdi joki 22 hi thi
    // printf("%d", _age);
}
//   * = value at that adress
//   & = adress of that value    
//there are few methods to print adress
// printf("%u",&age);
// printf("%u",ptr);
// printf("%u",&ptr);
//there are few methods to print values
// printf("%d",*ptr);
// printf("%d",age);
// printf("%d",*(%age));

