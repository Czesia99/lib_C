/*
** EPITECH PROJECT, 2018
** lib_C
** File description:
** my_strcat.c
*/

#include "../include/my.h"

char *my_strcat(char *str1, char *str2)
{
    int pos = 0;
    char *str = malloc(sizeof(char) * my_strlen(str1) + my_strlen(str2) + 1);

    for (int i = 0; str1[i] != '\0'; i++, pos++)
        str[pos] = str1[i];
    for (int i = 0; str2[i] != '\0'; i++, pos++)
        str[pos] = str2[i];
    str[pos] = '\0';
    return (str);
}