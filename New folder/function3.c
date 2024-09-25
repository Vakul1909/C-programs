#include<stdio.h>
float areacircle(float rad);
float arearectangle(float a, float b);
float areasquare(float side);
int main(){
    float rad;
    printf("enter radius:");
    scanf("%f",&rad);
    printf("area of circle:%f\n",areacircle(rad));
    float a,b;
    printf("enter length:");
    scanf("%f",&a);
    printf("enter breath:");
    scanf("%f",&b);
    printf("area of rectangle:%f\n",arearectangle(a,b));
    float side;
    printf("enter side:");
    scanf("%f",&side);
    printf("area of square:%f",areasquare(side));
    return 0;
}
float areacircle(float rad){
    return 3.14*rad*rad;
}float arearectangle(float a,float b){
    return a*b;
}float areasquare(float side){
    return side*side;
}
