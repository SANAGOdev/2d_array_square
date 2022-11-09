/*
** EPITECH PROJECT, 2022
** start file
** File description:
** start file
*/

#include "../include/my.h"

void start(void)
{
    int lines = 0, columns = 0;

    printf("Enter a lines number : ");
    scanf("%d", &lines);
    printf("Enter a columns number : ");
    scanf("%d", &columns);
    area(lines, columns);

}