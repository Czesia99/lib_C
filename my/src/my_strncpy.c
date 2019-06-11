/*
** EPITECH PROJECT, 2018
** my_strncpy.c
** File description:
** copy the part of a string into another one
*/

#include "../include/my.h"

char *my_strncpy(char *dest, char *src, int n)
{
    int i = 0;

    for (i = 0; i < n; i++)
        dest[i] = src[i];
    dest[i] = '\0';
    return (dest);
}
