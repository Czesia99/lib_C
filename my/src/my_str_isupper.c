/*
** EPITECH PROJECT, 2018
** my_str_isupper.c
** File description:
** return 1 when string got only caps
*/

#include "../include/my.h"

int my_str_isupper(char *str)
{
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 97 && str[i] <= 122)
            return (0);
    }
    return (1);
}
