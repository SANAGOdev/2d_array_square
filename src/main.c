/*
** MY PERSONNAL PROJECT
** 2d array
** File description:
** 2d array square pattern
*/

#include "../include/my.h"

int main(void)
{
    int lines = 0, columns = 0;

    printf("Enter a lines number : ");
    scanf("%d", &lines);
    printf("Enter a columns number : ");
    scanf("%d", &columns);
    area(lines, columns);

    return 0;   
}
