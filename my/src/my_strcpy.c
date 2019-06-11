/*
** EPITECH PROJECT, 2018
** my_strcpy.c
** File description:
** copy the content of a string into another one
*/

#include "../include/my.h"

char *my_strcpy(char *dest, char *src)
{
    int i = 0;

    for (i = 0; src[i] != '\0'; i++)
        dest[i] = src[i];
    dest[i] = '\0';
    return (dest);
}
