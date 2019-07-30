/*
** EPITECH PROJECT, 2018
** lib_C
** File description:
** tree.h
*/

#ifndef __TREE_H_
#define __TREE_H_

//------ includes ------
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

//------ structures ------

typedef struct tree_s {
    int value;
    struct tree_s *tleft;
    struct tree_s *tright;
    struct tree_s *parent;
} tree_t;

//------ prototypes ------

tree_t *new_tree(int value);
tree_t *join_tree(tree_t *tleft, tree_t *tright, int node);
void clean_tree(tree_t *tree);
void print_tree_prefix(tree_t *tree);
int count_tree_nodes(tree_t *tree);


#endif /* TREE_H_ */