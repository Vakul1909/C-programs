#include <stdio.h>
#include <stdlib.h>
// int main()
// {
//     float a, b;
//     printf("enter first number");
//     scanf("%f", &a);
//     printf("enter second number");
//     scanf("%f", &b);
//     float sum = a + b;
//     printf("sum of two given number=%f\n", sum);
//     printf("Vakul Mittal IT-1 4413203123");
//     return 0;
// }

// int main(){
//     float p,r,t;
//     printf("enter principle:");
//     scanf("%f",&p);
//     printf("enter rate:");
//     scanf("%f",&r);
//     printf("enter time:");
//     scanf("%f",&t);
//     if(p<=0||r<=0||t<=0){
//         printf("error");
//         return 0;
//     }
//     float s=(p*r*t)/100;
//     printf("simple interest:%.2f\n",s);
//     printf("Vakul Mittal IT-1 4413203123");
//     return 0;}

// int main(){
//     float a,b;
//     printf("enter length:");
//     scanf("%f",&a);
//     printf("enter breath:");
//     scanf("%f",&b);
//     if(a<=0||b<=0){
//         printf("error");
//         exit(0);
//     }
//     float area=a*b;
//     float perimeter=2*(a+b);
//     printf("area of rectangle:%f\n",area);
//     printf("perimeter of rectangle:%f\n",perimeter);
//     printf("Vakul Mittal IT-1 4413203123");
//     return 0;
// }
// int main() {
//     int marks[5];
//     int total = 0;
//     printf("Enter marks for five subjects:\n");
//     for (int i = 0; i < 5; i++) {
//         printf("Enter marks for subject %d: ", i + 1);
//         scanf("%d", &marks[i]);
//         if (marks[i] < 0 || marks[i] > 100) {
//             printf("Invalid marks. Marks should be between 0 and 100.\n");
//         }
//         total += marks[i];
//     }
//     float percentage= total/5;
//     printf("Total marks: %d\n", total);
//     printf("percentage:%f\n",percentage);
//     printf("Vakul Mittal IT-1 4413203123");
//     return 0;}

// int main(){
//     int n;
//     printf("choose number 1 or 2\n 1:f to c\n 2:c to f\n");
//     scanf("%d",&n);
//     if(n==1){
//         float f;
//         printf("enter temperature in fahrenheit:");
//         scanf("%f",&f);
//         float c=(f-32)*5/9;
//         printf("value is:%f\n",c);
//     }else if(n==2){
//         float c;
//         printf("enter temperature in celsius:");
//         scanf("%f",&c);
//         float f=(9/5*c)+32;
//         printf("value is:%f\n",f);
//     }else{
//         printf("please choose 1 or 2 only\n");
//     }
//     printf("Vakul Mittal IT-1 4413203123");
//     return 0;
// }
// int main() {
//     int number, sum;
//     printf("Enter a three-digit number: ");
//     scanf("%d", &number);
//     sum = number / 100;
//     sum += (number / 10) % 10;
//     sum += number % 10;
//     printf("Sum of digits: %d\n", sum);
//     printf("Vakul Mittal IT-1 4413203123");
//     return 0;
// }
// int main() {
//     int number;
//     printf("Enter a three-digit number: ");
//     scanf("%d", &number);
//     int digit1 = number / 100;
//     int digit2 = (number / 10) % 10;
//     int digit3 = number % 10;
//     int rnumber= digit3*100+digit2*10+digit1;
//     printf("reverse of the number is:%d\n",rnumber);
//     printf("Vakul Mittal IT-1 4413203123");
//     return 0;}

// int main(){
//     int num;
//     printf("enter number:");
//     scanf("%d",&num);
//     if(num<=0){
//         printf("error\n");
//     }
//     else if(num%2==0){
//         printf("entered number is even number\n");
//     }else {
//         printf("entered number is odd number\n");
//     }printf("Vakul Mittal IT-1 4413203123");
//     return 0;}

// int main(){
//     int year;
//     printf("enter year:");
//     scanf("%d",&year);
//     if(year<=0){
//         printf("error");
//     }else if((year%100!=0 && year%4==0 ) || (year%400==0)){
//         printf("entered year is leap year\n");
//     }else{
//         printf("entered year is not leap year\n");
//     }printf("Vakul Mittal IT-1 4413203123");
//     return 0;

// }
//  int main(){
//     int num;
//     printf("enter number:");
//     scanf("%d",&num);
//     if(num<0){
//         printf("number is negative\n");
//     }
//     else if(num>0){
//         printf("number is positive\n");
//     }else {
//         printf("number is zero\n");
//     }printf("Vakul Mittal IT-1 4413203123");
//     return 0;
// }
// int main(){
//     int n1,n2,n3;
//     printf("enter first number:");
//     scanf("%d",&n1);
//     printf("enter second number:");
//     scanf("%d",&n2);
//     printf("enter third number:");
//     scanf("%d",&n3);
//     if(n1>n2&&n1>n3){
//         printf("%d is biggest number\n",n1);
//         if(n2==n3){
//             printf("remain two no are equal\n");
//         }
//     }else if(n2>n1&&n2>n3){
//         printf("%d is biggest number\n",n2);
//         if(n1==n3){
//             printf("remain two no are equal\n");
//         }
//     }else{
//         printf("%d is biggest number\n",n3);
//         if(n1==n2){
//             printf("remain two no are equal\n");
//         }
//     }
//     printf("Vakul Mittal IT-1 4413203123");
//     return 0;
// }
// int main(){
//     int marks[5];
//     int total = 0;
//     printf("Enter marks for five subjects:\n");
//     for (int i = 0; i < 5; i++) {
//         printf("Enter marks for subject %d: ", i + 1);
//         scanf("%d", &marks[i]);
//         if (marks[i] < 0 || marks[i] > 100) {
//             printf("Invalid marks. Marks should be between 0 and 100.\n");
//         }
//         total += marks[i];
//     }
//     printf("Total marks: %d\n", total);
//     float percentage= total/5;
//     printf("percentage:%f\n",percentage);
//     if(percentage>=90){
//         printf("garde:A\n");
//     }else if(percentage>=80&&percentage<90){
//         printf("grade:B\n");
//     }else if(percentage>=60&&percentage<80){
//         printf("grade:C\n");
//     }else if(percentage>=40&&percentage<60){
//         printf("garde:D\n");
//     }else {
//         printf("you are fail\n");
//     }
//     printf("Vakul Mittal IT-1 4413203123");
//     return 0;

// }    
// int main(){
//     int num1,num2;
//     printf("enter number1 :");
//     scanf("%d",&num1);
//     printf("enter number2 :");
//     scanf("%d",&num2);
//     num1>num2 ? printf("first number is bigger\n"):printf("second number is bigger \n");
//     printf("Vakul Mittal IT-1 4413203123");
//     return 0;
// } 
// int main() {
//     char ch;
//     printf("Enter a character: ");
//     scanf("%c", &ch);
//     if (ch >= 'A' && ch <= 'Z')
//         printf("%c is an uppercase letter.\n", ch);
//     else if (ch >= 'a' && ch <= 'z')
//         printf("%c is a lowercase letter.\n", ch);
//     else if (ch >= '0' && ch <= '9')
//         printf("%c is a digit.\n", ch);
//     else
//         printf("%c is a special symbol.\n", ch);
//     printf("Vakul Mittal IT-1 4413203123");    
//     return 0;
// }


// int main() {
//     #define msize 100
//     int matrix[msize][msize];
//     int i, j, row,column, sum_primary = 0, sum_secondary = 0;
//     printf("Enter the row of the  matrix: ");
//     scanf("%d", &row);
//     printf("Enter the column of the  matrix: ");
//     scanf("%d", &column);
//     printf("Enter the elements of the matrix:\n");
//     for (i = 1; i <=row; i++) {
//         for (j = 1; j <= column; j++) {
//             scanf("%d", &matrix[i][j]);
//         }
//     }
//     printf("The entered matrix is:\n");
//     for (i = 1; i <= row; i++) {
//         for (j = 1; j <= column; j++) {
//             printf("%d ", matrix[i][j]);
//         }
//         printf("\n");
//     }
//     for (i = 1; i <= row; i++) {
//         printf("primary diagnol elements are:%d\n",matrix[i][i]);
//         sum_primary += matrix[i][i];
//     }
//     for (i = 1; i <= row; i++) {
//         printf("secondary diagnol elements are:%d\n",matrix[i][row - i + 1]);
//         sum_secondary += matrix[i][row - i + 1];
//     }
//     printf("Sum of primary diagonal: %d\n", sum_primary);
//     printf("Sum of secondary diagonal: %d\n", sum_secondary);
//     return 0;
// }
// int main() {
//     #define msize 100
//     int matrix[msize][msize];
//     int i, j, row,column, sum_primary = 0, sum_secondary = 0;
//     printf("Enter the row of the  matrix: ");
//     scanf("%d", &row);
//     printf("Enter the column of the  matrix: ");
//     scanf("%d", &column);
//     printf("Enter the elements of the matrix:\n");
//     for (i = 1; i <=row; i++) {
//         for (j = 1; j <= column; j++) {
//             scanf("%d", &matrix[i][j]);
//         }
//     }
//     printf("The entered matrix is:\n");
//     for (i = 1; i <= row; i++) {
//         for (j = 1; j <= column; j++) {
//             printf("%d ", matrix[i][j]);
//         }
//         printf("\n");
//     }for (i = 1; i <= row; i++) {
//         for (j = 1; j <= column; j++) {
//             if(i<=j){
//                 printf("%d", matrix[i][j]);
//             }else{
//                 printf(" ");
//             }
//         }
//         printf("\n");
//     } 
//     return 0;
// }   
// #include<stdio.h>

// int main()
// {
   
//     char ch;

//     printf("Enter a character: ");
//     scanf("%c", &ch);

//     if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) 
//     {
//         if (ch >= 'A' && ch <= 'Z') 
//         {
//             ch = ch + ('a' - 'A');
//             printf("Converted to lowercase: %c\n", ch);
//         } 
//         else 
//         {
//             ch = ch - ('a' - 'A');
//             printf("Converted to uppercase: %c\n", ch);
//         }
//     }

//     else
//     {
//         printf("Entered character is not an alphabet.\n");
//     }printf("Vakul Mittal IT-1 4413203123");
//     return 0;
// }                
// #include<stdio.h>

// int main()
// {
    
//     char ch;

//     printf("Enter a character: ");
//     scanf("%c", &ch);

//     if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z') || (ch >= '0' && ch <= '9')) 
//     {
//         printf("ASCII value of %c is %d\n", ch, ch);
//     } 

//     else 
//     {
//         printf("Entered character is neither an alphabet nor a digit.\n");
//     }printf("Vakul Mittal IT-1 4413203123");
//     return 0;
// }

// // // 


// #include <stdio.h>

// int main() {
//     int decimalNumber, remainder, binaryNumber = 0, base = 1;
//     int temp;

//     // Input decimal number
//     printf("Enter a decimal number: ");
//     scanf("%d", &decimalNumber);

//     // Convert decimal to binary
//     temp = decimalNumber;
//     while (temp > 0) {
//         remainder = temp % 2;
//         binaryNumber = binaryNumber + remainder * base;
//         temp = temp / 2;
//         base = base * 10;
//     }
//     // Output binary and octal numbers
//     printf("Binary equivalent: %d\n", binaryNumber);
//     printf("Octal equivalent: %o\n", decimalNumber);
//     printf("Vakul Mittal IT-1 4413203123");

//     return 0;
// }

// int main(){
//     int n;
//     printf("enter a number:");
//     scanf("%d",&n);
//     int fact=1;
//     for(int i=1;i<=n;i++){
//        fact=fact*i;}
        
//     printf("factorial of %d is:%d\n",n,fact);
//     printf("Vakul Mittal IT-1 4413203123");
//     return 0;
// }
// #include<stdio.h>

// int main()
// {
   
//     float base, result = 1.0;
//         int power;

//         printf("Enter the number you want to know power of : ");
//         scanf("%f", &base);

//         do {
//             printf("Enter the Power (a non-negative integer) : ");
//             scanf("%d", &power);
//         } while (power < 0);

//         for (int i = 0; i < power; i++) {
//             result *= base;
//         }

//         printf("Result: %.2f\n", result);
//         printf("Vakul Mittal IT-1 4413203123");

//     return 0;
// }



// #include <stdio.h>

// int main() 
// {
    
//     int N;

//     do 
//     {
//         printf("Enter a positive Number for end point (N > 1): ");
//         scanf("%d", &N);
//     } while (N <= 1);

//     printf("Prime numbers between 1 and %d are : \n", N);

//     for (int i = 2; i <= N; i++) 
//     {
//         int isPrime = 1;

//         for (int j = 2; j < i; j++) 
//         {
//             if (i % j == 0) 
//             {
//                 isPrime = 0;
//                 break;
//             }
//         }

//         if (isPrime) 
//         {
//             printf(" %d\n", i);
//         }
//     }
//     printf("Vakul Mittal IT-1 4413203123");

    

//     return 0;
// }
//

// #include <stdio.h>

// int main()
// {
    

//     int nth, nterms;
//     int n1 = 0;
//     int n2 = 1;
//     int count = 0;

//     do 
//     {
//         printf("Enter a positive Number for end point (N > 1): ");
//         scanf("%d", &nterms);
//     } while (nterms <= 1);

//     if (nterms == 1)
//     {
//         printf("Fibonacci Series upto %d is term :- ", nterms);
//         printf("%d", n1);
//     }

//     else
//     {
//         printf("Fibonacci Series upto %d terms is :- \n", nterms);

//         while (count <= (nterms - 1))
//         {
//             printf("%d\n", n1);
//             nth = (n1 + n2);
//             n1 = n2;
//             n2 = nth;
//             count = count + 1;
//         }
//     }
//      printf("Vakul Mittal IT-1 4413203123");
//     return 0;
// }
// #include <stdio.h>

// int main()
// {
   
//     int num, first, second, third, sum;

//     do
//     {
//         printf("Enter a Three Digit Number : ");
//         scanf("%d", &num);
//     } while (num > 999 || num < 100);

//     if (num >= 100 && num <= 999)
//     {
//         first = (num / 100);
//         second = (num % 100) / 10;
//         third = (num % 100) % 10;

//         
        

//         sum = first + second + third;

//         printf("Sum of the digits entered : %d\n", sum);
//     }
//     printf("Vakul Mittal IT-1 4413203123");
//     return 0;
// }
// #include <stdio.h>

// int main() 
// {
//     int count = 0;
//     int sum = 0;
//     float average;

//     printf("Enter 10 different numbers:\n");
//     while (count < 10) 
//     {
//         int num;
//         printf("Enter number %d: ", count + 1);
//         scanf("%d", &num);
//         sum += num;
//         count++;
//     }
//     average = (float)sum / 10;

//     printf("\nSum of the numbers: %d\n", sum);
//     printf("Average of the numbers: %.2f\n", average);
//     printf("Vakul Mittal IT-1 4413203123");

//     return 0;
// }
//
// #include <stdio.h>

// int main() {
//     int rows, i, j;
//     char ch = 'A';

//     printf("Enter the number of rows: ");
//     scanf("%d", &rows);

//     for (i = 1; i <= rows; i++) {
//         ch = 'A'; // Reset the character for each row
//         for (j = 1; j <= i; j++) {
//             printf("%c ", ch++);
//         }
//         printf("\n");
       
//     }
//     printf("Vakul Mittal IT-1 4413203123");

//     return 0;
// }
// #include <stdio.h>

// int main() 
// {
    
//     int rows;

//     printf("\nEnter the number of rows: ");
//     scanf("%d", &rows);

//     for (int i = rows; i >= 1; i--) 
//     {
//         for (int j = i; j >= 1; j--) 
//         {
//             printf("%d ", j);
//         }
//         printf("\n");
//     }
//      printf("Vakul Mittal IT-1 4413203123");

//     return 0;
//}
// int cube(int i);
// int main(){
//     for(int i=1;i<=10;i++){
//         printf("cube of %d:%d\n",i,cube(i));
//         int m=cube(i);
//     }
//     return 0;
// }
// int cube(int i){
//     return i*i*i;
// }



int main(){
    int matrix1[100][100] , matrix2[100][100] ,matrix3[100][100];
    int row,column;
    printf("enter number of rows and column:");
    scanf("%d %d",&row,&column);
    printf("enter components of matrix1:");
    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            scanf("%d",&matrix1[i][j]);
        }
    }
    printf("enter components of matrix2:");
    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            scanf("%d",&matrix2[i][j]);
        }
    }
    printf("matrix1:\n");
    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            printf("%d ",matrix1[i][j]);
        }  
        printf("\n"); 
    }
    printf("matrix2:\n");
    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            printf("%d ",matrix2[i][j]);
        }  
        printf("\n"); 
    }  
    printf("matrix3:\n");
    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            matrix3[i][j]=0;
            matrix3[i][j]+=(matrix1[i][j])*(matrix2[j][i]);
            printf("%d ",matrix3[i][j]);
        }
        printf("\n");
    }  
    return 0;      
}