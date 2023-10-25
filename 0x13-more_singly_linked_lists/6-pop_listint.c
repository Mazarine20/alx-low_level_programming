#include "lists.h"

/**
 * pop_listint - Deletes the head node of a listint_t linked list.
 * @head: A pointer to a pointer to the head of the list.
 *
 * Return: The head node's data (n). If the linked list is empty, return 0.
 */
int pop_listint(listint_t **head)
{
    int data;
    listint_t *temp;

    if (*head == NULL)
        return (0);

    data = (*head)->n;
    temp = (*head)->next;
    free(*head);
    *head = temp;

    return (data);
}
