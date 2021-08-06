#include "binary_trees.h"

/**
 * binary_tree_node - function that creates a binary tree node
 * @parent: pointer to the parent node of the node to create
 * @value: the value to put in the new node
 * Return: return a pointer to the new node, or NULL on failure
*/
heap_t *binary_tree_node(heap_t *parent, int value)
{
	heap_t *newNode;

	newNode = malloc(sizeof(heap_t));
	if (!newNode)
	{
		free(newNode);
		return (NULL);
	}

	newNode->parent = parent;
	newNode->left = NULL;
	newNode->right = NULL;
	newNode->n = value;
	return (newNode);
}
