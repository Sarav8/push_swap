#include "push_swap.h"

void push_a(t_list **stack_a, t_list **stack_b)
{
    t_list *temp;

    if (!stack_b || !(*stack_b)) 
        return;
    temp = *stack_b;           
    *stack_b = (*stack_b)->next; 
    temp->next = *stack_a; 
    *stack_a = temp; 
    //g_movements++;
    write(1, "pa\n", 3);
}
void push_b(t_list **stack_a, t_list **stack_b)
{
    t_list *temp;

    if (!stack_a || !(*stack_a)) 
        return;
    temp = *stack_a;           
    *stack_a = (*stack_a)->next; 
    temp->next = *stack_b; 
    *stack_b = temp; 
    //g_movements++;
    write(1, "pb\n", 3);
}