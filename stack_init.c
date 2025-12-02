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

int fill_stack_2argc(char *arg, t_list **stack_a)
{
    int i;
    char **numbers;
    long long num;

    i = 0;
    num = 0;
    numbers = ft_split(arg, ' ');
    if (!numbers || !numbers[0])
        return (1);
    while (numbers[i])
    {
        num = ft_atol(numbers[i]);  
        if (num_valid(numbers[i]) || num < -2147483648LL || num > 2147483647LL)
        {
            ft_free_split(numbers);free_stack(stack_a);return (1); 
        }
        add_last(stack_a, (int)num);
        i++;
    }
    if (has_duplicates(numbers, i))
    {
        ft_free_split(numbers);
        free_stack(stack_a);return (1);
    }
    ft_free_split(numbers);return (0);
}


int fill_stack_more2argc(int argc, char **argv, t_list **stack_a)
{
    int i = 1;
    long long num;

    num = 0;
    while (i < argc)
    {
        num = ft_atol(argv[i]);
        if (num_valid(argv[i]) || num < -2147483648LL || num > 2147483647LL)
        {
            free_stack(stack_a);
            return (1);
        }
        add_last(stack_a, (int)num);
        i++;
    }
    if (has_duplicates(argv + 1, argc - 1))
    {
        free_stack(stack_a);
        return (1);
    }
    return (0);
}
