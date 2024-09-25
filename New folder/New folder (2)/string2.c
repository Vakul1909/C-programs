#include <stdio.h>
int main()
{
    char str[100];
    fgets(str, 100, stdin); // isme hum fgets ka use usleye kar rhe h jisse hum koi bhi sentence print kara sake mtlb words ke beech gap hoga tab bhi sentence print ho jayega
    puts(str);              // isme puts ka kaam print karana or ek line last mein extra as a gift dena
    printf("entered name is:%s", str);
    return 0;
}
// fgets mein stdin hume likhna h uske syntax mein