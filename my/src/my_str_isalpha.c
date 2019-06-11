/*
** EPITECH PROJECT, 2018
** my_str_isalpha.c
** File description:
** return 1 if the characters are only alphanumeric
*/

#include "../include/my.h"

int my_str_isalpha(char const *str)
{
    for (int i = 0; str[i] != '\0'; i++) {
            if (str[i] >= 65 && str[i] <= 90)
                continue;
            else if (str[i] >= 97 && str[i] <= 122)
                continue;
            else
                return (0);
    }
    return (1);
}
