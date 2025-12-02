#include "push_swap.h"


/*int check_int_range(char *str)
{
    long num = ft_atol(str);
    if (num < -2147483648 || num > 2147483647)
        return 1; 
    return 0;      
}*/

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
