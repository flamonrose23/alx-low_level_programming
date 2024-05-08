#ifndef _SORTING_ALGOS_H_
#define _SORTING_ALGOS_H_

#include <stdlib.h>
#include <stdio.h>

/**
 * struct listint_s - singly linked list
 *
 * @a: Integer
 * @index: Index of node in list
 * @next: pointing to next node
 *
 * Description: structure of singly linked list
 * for Holberton school
 */

typedef struct listint_s
{
	int a;
	size_t index;
	struct listint_s *next;
} listint_t;

/**
 * struct skiplist_s - Singly linked list with an express lane
 *
 * @a: integer
 * @index: Index of node in list
 * @next: pointing to next node
 * @express: Pointing to next node in express lane
 *
 * Description: singly linked list node structure with an express lane
 * for Holberton project
 */

typedef struct skiplist_s
{
	int a;
	size_t index;
	struct skiplist_s *next;
	struct skiplist_s *express;
} skiplist_t;

int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int jump_search(int *array, size_t size, int value);
int interpolation_search(int *array, size_t size, int value);
int exponential_search(int *array, size_t size, int value);
int advanced_binary(int *array, size_t size, int value);
listint_t *jump_list(listint_t *list, size_t size, int value);
skiplist_t *linear_skip(skiplist_t *list, int value);

#endif
