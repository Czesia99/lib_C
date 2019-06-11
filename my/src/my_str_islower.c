/*
** EPITECH PROJECT, 2018
** my_str_islower.c
** File description:
** my_str_islower
*/

#include "../include/my.h"

int my_str_islower(char *str)
{
    for (int i = 0; str[i] != '\0'; i++)
        if (str[i] >= 65 && str[i] <= 90)
            return (0);
    return (1);
}
