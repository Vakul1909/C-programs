#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int stonepaperscissorgame(char you, char comp)
{
    if (you == comp)
    {
        return 0;
    }
    if (you == 's' && comp == 't')
    {
        return -1;
    }
    else if (you == 't' && comp == 's')
    {
        return 1;
    }
    if (you == 't' && comp == 'p')
    {
        return -1;
    }
    else if (you == 'p' && comp == 't')
    {
        return 1;
    }
    if (you == 'p' && comp == 's')
    {
        return -1;
    }
    else if (you == 's' && comp == 'p')
    {
        return 1;
    }
}
int main()
{
    char you, comp;
    srand(time(0));
    int number = rand() % 100 + 1;
    if (number < 33)
    {
        comp = 's';
    }
    else if (number > 33 && number < 66)
    {
        comp = 't';
    }
    else
    {
        comp = 'p';
    }
    printf("choose one of them\n");
    printf("1:s for scissor\n");
    printf("2:t for stone\n");
    printf("3:p for paper\n");
    scanf("%c", &you);
    int result = stonepaperscissorgame(you, comp);
    if (result == 0)
    {
        printf("draw\n");
    }
    else if (result == 1)
    {
        printf("win\n");
    }
    else
    {
        printf("loose\n");
    }
    printf("you choose %c and comp choose %c\n", you, comp);
    printf("thanku i hope u enjoy this game");
    return 0;
}