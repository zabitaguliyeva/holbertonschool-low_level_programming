#include <stdlib.h>
#include "lists.h"

/**
 * free_list - frees malloced adresses
 * @head: pointer to curr addr
 */
void free_list(list_t *head)
{
	if (head)
	{
		if (head->next != NULL)
			free_list(head->next);
		free(head->str);
		free(head);
	}
}
