#include <stdio.h>
size_t looped_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);
/**
 * looped_listint_len - counts the number of													unique nodes
 * in a looped listint_t linked list.
 * @head: A pointer to the head of the listint_t												to check. *
 * return: if the list is not looped - 0.
 * otherwise - the number of unique nodes in the list												the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *tortoise, *hare;
	size_t nodes = 1;
	if (head == NULL || head->next == NULL)
	return (0);
	tortoise = head->next;
	hare = (head->next)->next;
	while (hare)
	{
		if (tortoise == hare)
	{
		tortoise = head;
		while (tortoise != hare)
	{
		nodes++;
		tortoise = tortoise->next;
		hare = hare->next;
	}
		tortoise = tortoise->next;
		while (tortoise != hare)
		{
