/*
** EPITECH PROJECT, 2018
** my_strcmp.c
** File description:
** return 1 when strings are the same
*/

#include "../include/my.h"

int my_strcmp(char *s1, char *s2)
{
    for (int i = 0; s1[i] != '\0'; i++)
        if (s1[i] != s2[i])
            return (0);
    return (1);
}
