#include "push_swap.h"

void reverse_rotate_a(t_list **stack_a)
{
    t_list *last;
    t_list *penultimate;

    if (!stack_a || !(*stack_a) || !(*stack_a)->next)
        return;

    penultimate = *stack_a;
    while (penultimate->next->next)
        penultimate = penultimate->next;

    last = penultimate->next;
    penultimate->next = NULL;
    last->next = *stack_a;
    *stack_a = last;
    g_movements++;
    write(1, "rra\n", 4);
    //print_stack(*stack_a, "A");
    
}

void reverse_rotate_b(t_list **stack_b)
{
    t_list *last;
    t_list *penultimate;

    if (!stack_b || !(*stack_b) || !(*stack_b)->next)
        return;

    penultimate = *stack_b;
    while (penultimate->next->next)
        penultimate = penultimate->next;

    last = penultimate->next;
    penultimate->next = NULL;
    last->next = *stack_b;
    *stack_b = last;
    g_movements++;
    write(1, "rrb\n", 4);
    //print_stack(*stack_b, "B");
}

void reverse_rotate_r(t_list **stack_a, t_list **stack_b)
{
    reverse_rotate_a(stack_a);
    reverse_rotate_b(stack_b);
    write(1, "rrr\n", 4);
    //print_stack(*stack_b, "B");
    //print_stack(*stack_a, "A");
}
