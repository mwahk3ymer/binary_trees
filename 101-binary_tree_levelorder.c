#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_levelorder - Perform level-order traversal on a binary tree
 * @tree: Pointer to the root node of the tree to traverse
 * @func: Pointer to a function to call for each node
 */
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
    if (tree == NULL || func == NULL)
        return;

    /* Create a queue to store nodes for level-order traversal */
    binary_tree_t **queue = NULL;
    int front = 0, rear = 0;

    /* Allocate memory for the queue */
    queue = malloc(sizeof(binary_tree_t *));
    if (queue == NULL)
        return;

    /* Enqueue the root node */
    queue[rear] = (binary_tree_t *)tree;
    rear++;

    /* Process nodes in the queue */
    while (front < rear)
    {
        /* Dequeue a node from the front of the queue */
        const binary_tree_t *current = queue[front];
        front++;

        /* Call the function for the current node */
        func(current->n);

        /* Enqueue the left child if it exists */
        if (current->left)
        {
            queue = realloc(queue, sizeof(binary_tree_t *) * (rear + 1));
            if (queue == NULL)
                return;
            queue[rear] = (binary_tree_t *)(current->left);
            rear++;
        }

        /* Enqueue the right child if it exists */
        if (current->right)
        {
            queue = realloc(queue, sizeof(binary_tree_t *) * (rear + 1));
            if (queue == NULL)
                return;
            queue[rear] = (binary_tree_t *)(current->right);
            rear++;
        }
    }

    /* Free the queue after traversal */
    free(queue);
}
