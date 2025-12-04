/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_init.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: savaquer <savaquer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/04 17:18:56 by savaquer          #+#    #+#             */
/*   Updated: 2025/12/04 17:43:12 by savaquer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	print_stack(t_list *stack, char *name)
{
	t_list	*temp;

	temp = stack;
	printf("Stack %s:\n", name);
	while (temp)
	{
		printf("%d\n", temp->num);
		temp = temp->next;
	}
}

void	free_stack(t_list **stack)
{
	t_list	*temp;

	while (*stack)
	{
		temp = *stack;
		*stack = (*stack)-> next;
		free(temp);
	}
}

int	fill_stack(char *arg, t_list **stack_a)
{
	char		**numbers;
	long long	num;
	int			i;

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
	ft_free_split (numbers);
	return (0);
}

long long	ft_atol(const char *nptr)
{
	int			i;
	long long	sign;
	long long	result;

	i = 0;
	sign = 1;
	result = 0;
	while ((nptr[i] >= 9 && nptr[i] <= 13) || nptr[i] == ' ')
		i++;
	if (nptr[i] == '+' || nptr[i] == '-')
	{
		if (nptr[i] == '-')
			sign *= -1;
		i++;
	}
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		result = result * 10 + (nptr[i] - '0');
		i++;
	}
	return (sign * result);
}
