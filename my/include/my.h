/*
** EPITECH PROJECT, 2018
** lib_C
** File description:
** my.h
*/

#ifndef __MY_H__
#define __MY_H__

//------ includes ------

#include <stdlib.h>
#include <unistd.h>

//------ prototypes ------

void my_putchar(char c);
int my_put_nbr(int nb);
int my_put_nbr_base(int nb, char *base);
int my_isneg(int n);
void my_swap(int *a, int *b);
int my_putstr(char *str);
int my_strlen(char *str);
int my_getnbr(char *str);
int my_compute_power_rec(int nb, int power);
int my_compute_square_root(int nb);
int my_is_prime(int nb);
char *my_strcpy(char *dest, char *src);
char *my_strncpy(char *dest, char *src, int n);
char *my_revstr(char *str);
int my_strcmp(char *s1, char *s2);
int my_strncmp(char *s1, char *s2, int n);
char *my_strupcase(char *str);
char *my_strlowcase(char *str);
int my_str_isalpha(char const *str);
int my_str_isnum(char *str);
int my_str_islower(char *str);
int my_str_isupper(char *str);
int my_str_isprintable(char *str);
char *my_strcat(char *str1, char *str2);
char **my_str_to_word_array(char *str, char sep);


#endif //__MY_H__
