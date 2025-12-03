#include "push_swap.h"

void print_stack(t_list *stack, char *name)
{
    t_list *temp;
    
    temp = stack;
    printf("Stack %s:\n", name);
    while (temp)
    {
        printf("%d\n", temp->num);
        temp = temp->next;
    }
}

void free_stack(t_list **stack)
{
    t_list *temp;

    while(*stack)
    {
        temp = *stack;
        *stack = (*stack)-> next;
        free(temp);
    }
}

int fill_stack(char *arg, t_list **stack_a)
{
    char        **numbers;
    long long   num;
    int         i;

    numbers = ft_split(arg, ' ');
    if (!numbers || !numbers[0])
        return (ft_free_split(numbers), 1);

    i = 0;
    while (numbers[i])
    {
        if (num_valid(numbers[i]))
            return (ft_free_split(numbers), 1);

        num = ft_atol(numbers[i]);
        if (num < -2147483648LL || num > 2147483647LL)
            return (ft_free_split(numbers), 1);

        add_last(stack_a, (int)num);
        i++;
    }

    ft_free_split(numbers);
    return (0);
}
