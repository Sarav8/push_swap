#include "push_swap.h"

int find_min_position(t_list *stack)
{
    int min;
    int pos;
    int i; 

    min = stack->num;
    pos = 0;
    i= 0;
    while (stack)
    {
        if (stack->num < min)
        {
            min = stack->num;
            pos = i;
        }
        i++;
        stack = stack->next;
    }
    return (pos);
}

int get_position(t_list *stack, int n)
{
    int i = 0;
    while (stack)
    {
        if (stack->num == n)
            return i;
        i++;
        stack = stack->next;
    }
    return (-1); 
}

int stack_size(t_list *stack)
{
    int count = 0;
    while (stack)
    {
        count++;
        stack = stack->next;
    }
    return (count);
}

void bring_to_top(t_list **stack, int pos)
{
    int size = stack_size(*stack); 

    if (pos <= size / 2)
        while (pos-- > 0)
            rotate_a(stack);
    else
        while (pos++ < size)
            reverse_rotate_a(stack);
}
int is_sorted(t_list *stack)
{
    while (stack && stack->next)
    {
        if (stack->num > stack->next->num)
            return 0;
        stack = stack->next;
    }
    return (1);
}
