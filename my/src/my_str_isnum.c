/*
** EPITECH PROJECT, 2018
** my_str_isnum.c
** File description:
** return 1 if there is only numbers on the string
*/

#include "../include/my.h"

int my_str_isnum(char *str)
{
    for (int i = 0; str[i] != '\0'; i++)
        if (str[i] < '0' || str[i] > '9')
            return (0);
    return (1);
}
