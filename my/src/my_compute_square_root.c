/*
** EPITECH PROJECT, 2018
** my_compute_square_root.c
** File description:
** number square root
*/

#include "../include/my.h"

int my_compute_square_root(int nb)
{
    int i = 0;

    for (int a = 1; a != nb; i += 1)
        a = i * i; 
    i = i - 1;
    return (i);
}
