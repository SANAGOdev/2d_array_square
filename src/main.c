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

    printf("Entrez un nombre de lignes : ");
    scanf("%d", &lines);
    printf("Entrez un nombre de colonnes : ");
    scanf("%d", &columns);
    area(lines, columns);

    return 0;   
}
