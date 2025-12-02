#include "push_swap.h"

void rotate_a(t_list **stack_a)
{
    t_list *first;
    t_list *last;

    if (!stack_a || !(*stack_a) || !(*stack_a)->next)
        return;

    first = *stack_a;
    *stack_a = (*stack_a)->next;
    first->next = NULL;

    last = *stack_a;
    while (last->next)
    last = last->next;

    last->next = first;
    write(1, "ra\n", 3);
    //print_stack(*stack_a, "A");
}

void rotate_b(t_list **stack_b)
{
    t_list *first;
    t_list *last;

    if (!stack_b || !(*stack_b) || !(*stack_b)->next)
        return;

    first = *stack_b;
    *stack_b = (*stack_b)->next;
    first->next = NULL;

    last = *stack_b;
    while (last->next)
    last = last->next;

    last->next = first;
    g_movements++;
    write(1, "rb\n", 3);
    //print_stack(*stack_b, "B");
}

void rotate_r(t_list **stack_a, t_list **stack_b)
{
    rotate_a(stack_a);
    rotate_b(stack_b);
    g_movements++;
    write(1, "rr\n", 3);
    //print_stack(*stack_a, "A");
    //print_stack(*stack_b, "B");
}
