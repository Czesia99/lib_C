/*
** EPITECH PROJECT, 2018
** lib_C
** File description:
** main.c
*/

#include "../include/tree.h"

int main(void)
{
    tree_t *tree = join_tree(join_tree(new_tree(8), new_tree(3), 2), new_tree(4), 6);

    print_tree_prefix(tree);

    printf("nombre de noeuds = %d\n", count_tree_nodes(tree));

    clean_tree(tree);
    return (0);
}