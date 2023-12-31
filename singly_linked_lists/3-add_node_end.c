#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
  * add_node_end - add new nodes to the end of list
  * @head: current place in the list
  * @str: string to add to th
  *
  * Return: new node
  */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *temporary;

	new_node = malloc(sizeof(size_t));
	if (head == NULL || str == NULL)
	{
		return (NULL);
	}
	if (new_node == NULL)
		return (NULL);
	new_node->len = strlen(str);
	new_node->str = strdup(str);
	new_node->next = NULL;
	temporary = *head;
	if (*head)
	{
		while (temporary->next)
		{
			temporary = temporary->next;
		}
		temporary->next = new_node;
	}
	else
	{
		*head = new_node;
	}

	return (new_node);
}
