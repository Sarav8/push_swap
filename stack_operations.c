#include "push_swap.h"

t_list *nodo_new(int num)
{
    t_list *new;

    new = malloc(sizeof(t_list));
    if (!new)
        return (NULL);
    new -> num = num;
    new -> next = NULL;
    return(new);
}

void add_first(t_list **head, int num)
{
    t_list *nodo;

    nodo = nodo_new(num);
    if (!nodo)
        return;
    nodo -> next = *head;
    *head = nodo;
}

void add_last(t_list **head, int num)
{
    t_list *nodo;
    t_list *temp;

    nodo = nodo_new(num);
    if(!nodo)
        return;
    if(*head == NULL)
    {
        *head = nodo;
        return;
    }
    temp = *head;
    while(temp-> next != NULL)
        temp = temp -> next;
    temp->next = nodo;
}

void remove_first(t_list **head)
{
    t_list *temp;

    if(!(head) || !(*head))
        return;
    temp = *head;
    *head = (*head)-> next;
    free(temp);
}
void remove_last(t_list **head)
{
    t_list *temp;

    if (!(head) || !(*head))
        return;
    if((*head)-> next == NULL)
        {
            free(*head);
            *head = NULL;
            return;
        }
    temp = *head;
    while(temp-> next ->next != NULL)
        temp = temp->next;
    free(temp->next);
    temp -> next = NULL;
}