/*
** EPITECH PROJECT, 2018
** my_strncmp.c
** File description:
** return 1 when strings are the same until n
*/

#include "../include/my.h"

int my_strncmp(char *s1, char *s2, int n)
{
    for (int i = 0; i < n; i++) {
        if (s1[i] != s2[i])
            return (0);
    }
    return (1);
}
