#include <stdio.h>

int main(int argc, char *argv[]) 
{
    int c, n1;

    n1 = 0;
    // ctrl+D in mac, ctr+z in win
    while ((c = getchar()) != EOF)
    {
        if (c == '\n')
        {
            ++n1;
        }
    }
    printf("%d \n", n1);
    return 0;
}