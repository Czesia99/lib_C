/*
** EPITECH PROJECT, 2018
** lib_C
** File description:
** my_strncat.c
*/

#include "../include/my.h"

char *my_strncat(char *str1, char *str2, int n)
{
    int pos = 0;
    char *str = malloc(sizeof(char) * my_strlen(str1) + n + 1);

    for (int i = 0; str1[i] != '\0'; i++, pos++)
        str[pos] = str1[i];
    for (int i = 0; i < n; i++, pos++)
        str[pos] = str2[i];
    str[pos] = '\0';
    return (str);
}