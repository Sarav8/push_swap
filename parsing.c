#include "push_swap.h"

int has_duplicates(char **numbers, int count)
{
    int i;
    int j;
    long num_i;
    long num_j;

    i = 0;
    j= 0;
    num_i = 0;
    num_j= 0;
    while (i < count) 
    {
        num_i = ft_atol(numbers[i]);
        int j = i + 1;
        while (j < count)
        {
            num_j = ft_atol(numbers[j]);
            if (num_i == num_j)
                return 1;
            j++;
        }
        i++;
    }
    return 0;
}

int num_valid(char *str)
{
    int i;

    i = 0;
    if(str[i] == '+' || str[i] == '-')
        i++;
    if (str[i] == '\0')    
        return(1);
    while(str[i] != '\0')
    {
        if(str[i] < '0' || str[i] > '9')
            return (1);
        i++;
    }
    return (0);
}

int check_argc(int argc)
{
    if (argc < 2)
    {
        return(1);
    }
    return(0);
}
int parse_args(int argc, char **argv, t_list **stack_a)
{
    int i;

    i = 1;
    while (i < argc)
    {
        if (fill_stack(argv[i], stack_a))
            return (1);
        i++;
    }
    if (has_duplicates_stack(*stack_a))
        return (1);
    return (0);
}

int has_duplicates_stack(t_list *stack)
{
    t_list *a = stack;
    t_list *b;

    while (a)
    {
        b = a->next;
        while (b)
        {
            if (a->num == b->num)
                return (1);
            b = b->next;
        }
        a = a->next;
    }
    return (0);
}
