/*
** EPITECH PROJECT, 2018
** lib_C
** File description:
** tree.c
*/

#include "../include/tree.h"

tree_t *new_tree(int value)
{
    tree_t *tree = malloc(sizeof(*tree));

    if (tree == NULL) {
        fprintf(stderr, "failed allocated memory\n");
        exit(EXIT_FAILURE);
    }
    tree->value = value;
    //dev help
    printf("creation of %d\n", tree->value);
    tree->tleft = NULL;
    tree->tright = NULL;
    tree->parent = NULL;
    return (tree);
}

tree_t *join_tree(tree_t *left, tree_t *right, int node)
{
    tree_t *tree = new_tree(node);
    tree->tleft = left;
    tree->tright = right;

    if (left != NULL)
        left->parent = tree;
    if (right != NULL)
        right->parent = tree;
    return (tree);
}

void print_tree_prefix(tree_t *tree)
{
    if (tree == NULL)
        return;
    if (tree->parent != NULL)
        printf("(%d) -> (%d)\n", tree->parent->value, tree->value);
    else
        printf("(%d)\n", tree->value);
    if (tree->tleft != NULL)
        print_tree_prefix(tree->tleft);
    if (tree->tright != NULL)
        print_tree_prefix(tree->tright);
}

int count_tree_nodes(tree_t *tr)
{
    if (tr == NULL)
        return 0;
    return (count_tree_nodes(tr->tleft) + count_tree_nodes(tr->tright) + 1);
}

void clean_tree(tree_t *tree)
{
    if (tree == NULL)
        return;
    //Dev help
    printf("%d is delete\n", tree->value);
    clean_tree(tree->tleft);
    clean_tree(tree->tright);
    free(tree);
}