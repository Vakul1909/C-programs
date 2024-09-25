#include<stdio.h>
int marks(int per);
int main(){
    int sc=99;
    int math=95;
    int sans=99;
    int per=((sc+math+sans)/3);
    printf("percentage of marks:%d",marks( per));
    return 0;
}
int marks(int per){
    return per;
}
