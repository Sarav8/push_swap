/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: savaquer <savaquer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/04 16:54:53 by savaquer          #+#    #+#             */
/*   Updated: 2025/12/04 17:29:12 by savaquer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_controller(t_list **stack_a, t_list **stack_b, int size)
{
	int	*arr;

	if (size == 2)
		sort_two(stack_a);
	else if (size == 3)
		sort_3(stack_a);
	else if (size == 4)
		sort_4(stack_a, stack_b);
	else if (size == 5)
		sort_5(stack_a, stack_b);
	else
	{
		arr = create_array(stack_a, size);
		sort_array(arr, size);
		assign_index(*stack_a, arr, size);
		free(arr);
		sort_large(stack_a, stack_b, size);
	}
}

int	main(int argc, char **argv)
{
	t_list	*stack_a;
	t_list	*stack_b;
	int		size;

	stack_a = NULL;
	stack_b = NULL;
	if (argc == 1)
		return (0);
	if (parse_args(argc, argv, &stack_a))
		return (write(2, "Error\n", 6), 1);
	if (is_sorted(stack_a))
		return (free_stack(&stack_a), 0);
	size = stack_size(stack_a);
	sort_controller(&stack_a, &stack_b, size);
	free_stack(&stack_a);
	free_stack(&stack_b);
	return (0);
}
