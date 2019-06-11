/*
** EPITECH PROJECT, 2018
** my_compute_power_rec.c
** File description:
** power in recursive
*/

#include "../include/my.h"

int my_compute_power_rec(int nb, int power)
{
    if (power < 0)
        return (0);
    else if (power == 0)
        return (1);
    else
        return (nb * my_compute_power_rec(nb, power - 1));
}
