/*
** EPITECH PROJECT, 2018
** my_strlen.c
** File description:
** return string length
*/

#include "../include/my.h"

int my_strlen(char *str)
{
    int i = 0;

    if (str == NULL)
        return (0);
    for (i = 0; str[i] != '\0'; i++);
    return (i);
}
