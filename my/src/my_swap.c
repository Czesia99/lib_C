/*
** EPITECH PROJECT, 2018
** my_swap.c
** File description:
** swap two integers content
*/

#include "../include/my.h"

void my_swap(int *a, int *b)
{
    int c = 0;

    c = *a;
    *a = *b;
    *b = c;
}
