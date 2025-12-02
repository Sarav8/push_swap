#include "push_swap.h"

int *create_array(t_list **stack_a, int size)
{
    int *arr;
    t_list *temp;
    int i;

    i = 0;
    arr = malloc(sizeof(int) * size);
    if (!arr)
        return (NULL);
    temp = *stack_a;
    while(temp != NULL)
    {
        arr[i]= temp->num;
        temp = temp->next;
        i++;
    }
    return(arr);
}

int *sort_array(int *arr, int size)
{
    int i;
    int j;
    int temp;

    i = 0;
    j = 0;
    while (i < size - 1)
    {
        j = 0;
        while(j < size - 1 - i)
        {
            if ( arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j]= arr[j + 1];
                arr[j + 1] = temp;
            }
        j++;
        }
    i++;
    }
    return(arr);
}

void assign_index(t_list *stack_a, int *arr, int size)
{
    t_list *temp;
    int i;

    temp = stack_a;
    while (temp != NULL)
    {
        i = 0;
        while (i < size)
        {
            if (arr[i] == temp->num)
            {
                temp->index = i;
                break;
            }
            i++;
        }
        temp = temp->next;
    }
}
int find_max_position(t_list *stack_b)
{
    t_list *temp;
    int max_index;
    int position;
    int max_pos;

    if (!stack_b)
        return (-1);
    temp = stack_b;
    max_index = temp->index;  
    position = 0;
    max_pos = 0;
    while (temp)
    {
        if (temp->index > max_index) 
        {
            max_index = temp->index;
            max_pos = position;
        }
        temp = temp->next;
        position++;
    }
    return (max_pos);
}