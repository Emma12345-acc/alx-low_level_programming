#include "lists.h"
/**
* pop_listint - deletes the head node of a linked list
* @head: pointer to the first element in the linked list
*
* Return: the data inside the elements that was deleted,
* or 0 if the list is empty
*/

int pop_listint(listint_t **head)
{
listint_t *temp;
int num;
if (!head || !*head)
return (0);
num = (*head)->n;
temp = (*head)->next;
free(*head);
*head = temp;
return (num);
}
===================================
7-get_nodeint.c
#include "lists.h"
/**
* get_nodeint_at_index - returns the node at a certain index in a linked list
* @head: first node in the linked list
* @index: index of the node to return
*
* Return: pointer to the node we're looking for, or NULL
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int i = 0;
listint_t *temp = head;
while (temp && i < index)
{
temp = temp->next;
i++;
}
return (temp ? temp : NULL);
}
