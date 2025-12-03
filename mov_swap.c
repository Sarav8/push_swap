#include "push_swap.h"

void swap_a(t_list **stack_a)
{
    t_list *tmp;

    if (!stack_a || !(*stack_a) || !(*stack_a)->next)
        return;
    tmp = (*stack_a)->next;
    (*stack_a)->next = tmp->next;
    tmp->next = *stack_a;
    *stack_a = tmp;
    //g_movements++;
    write(1, "sa\n", 3);
}

void swap_b(t_list **stack_b)
{
    t_list *tmp;

    if (!stack_b || !(*stack_b) || !(*stack_b)->next)
        return;
    tmp = (*stack_b)->next;
    (*stack_b)->next = tmp->next;
    tmp->next = *stack_b;
    *stack_b = tmp;
    //g_movements++;
    write(1, "sb\n", 3);
}

void ss(t_list **stack_a, t_list **stack_b)
{
    swap_a(stack_a);
    swap_b(stack_b);
    //g_movements++;
    write(1, "ss\n", 3);
}
