/*
** EPITECH PROJECT, 2018
** my_putstr.c
** File description:
** print a string char by char
*/

#include "../include/my.h"

int my_putstr(char *str)
{
    for (int i = 0; str[i] != '\0'; i++)
        my_putchar(str[i]);
    return (0);
}