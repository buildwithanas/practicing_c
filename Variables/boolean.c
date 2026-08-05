#include <stdio.h>
#include <stdbool.h>

#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    bool isonline = true;
    bool isoffline = false;
    bool isaboy = true;

    printf("Is the user online? %d\n", isonline);
    printf("Is the user offline? %d\n", isoffline);
    printf("He is a boy? %d\n", isaboy);

    if (isonline)
    {
        printf("The user is online.\n");
    }
    else
    {
        printf("The user is offline.\n");
    }

    return 0;
}