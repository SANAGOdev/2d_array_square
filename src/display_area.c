/*
** MY PERSONNAL PROJECT
** display area
** File description:
** display area
*/

#include "../include/my.h"

void area(int lines, int columns)
{
    char tab[lines][columns];

    int i = 0, j = 0;

    for (i = 0; i < lines; i++) {
        for (j = 0; j < columns + 1; j++) {

            if (i == 0 || i == lines - 1 || j == 0 || j == columns - 1) {
                tab[i][j] = 'o';
            }
            else {
                tab[i][j] = ' ';
            }

            tab[i][columns] = '\n';
            printf("%c", tab[i][j]);
        }
    }
}