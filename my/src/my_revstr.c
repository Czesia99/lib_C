/*
** EPITECH PROJECT, 2018
** my_revstr.c
** File description:
** reverse a string
*/

#include "../include/my.h"

char *my_revstr(char *str)
{
    int i = 0;
    int j = 0;
    char *rev = malloc(sizeof(char) * my_strlen(str));
    
    for (i = 0; str[i] != '\0'; i++);
    for (j = 0; i > 0; i--, j++) {
        rev[j] = str[i];
    }
    rev[j] = '\0';
    return (rev);
}