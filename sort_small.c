#include "push_swap.h"

void sort_two(t_list **stack_a)
{
    if (!stack_a || !(*stack_a) || !(*stack_a)->next)
        return;

    if ((*stack_a)->num > (*stack_a)->next->num)
        swap_a(stack_a); 
}

void sort_3(t_list **stack_a)
{
    int first;
    int second;
    int third;
    
    first=  (*stack_a)->num;
    second = (*stack_a)->next->num;
    third= (*stack_a)->next->next->num;
    if (first < second && second < third)
        return;
    else if (first > second && second < third && first < third)
        swap_a(stack_a);
    else if (first > second && second > third)
    {
        swap_a(stack_a);
        reverse_rotate_a(stack_a);
    }
    else if (first > second && second < third && first > third)
        rotate_a(stack_a);
    else if (first < second && second > third && first < third)
    {
        swap_a(stack_a);
        rotate_a(stack_a);
    }
    else if (first < second && second > third && first > third)
        reverse_rotate_a(stack_a);
}
void sort_4(t_list **stack_a, t_list **stack_b)
{
    int pos;

    pos = find_min_position(*stack_a);
    bring_to_top(stack_a, pos);
    push_b(stack_a, stack_b);
    sort_3(stack_a);
    push_a(stack_a, stack_b); 
}

void sort_5(t_list **stack_a, t_list **stack_b)
{
    int pos;

    pos = find_min_position(*stack_a);
    bring_to_top(stack_a, pos);
    push_b(stack_a, stack_b);
    pos = find_min_position(*stack_a);
    bring_to_top(stack_a, pos);
    push_b(stack_a, stack_b);
    sort_3(stack_a);
    push_a(stack_a, stack_b);
    push_a(stack_a, stack_b);

}