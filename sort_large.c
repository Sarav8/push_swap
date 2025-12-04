/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_large.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: savaquer <savaquer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/04 17:09:14 by savaquer          #+#    #+#             */
/*   Updated: 2025/12/04 17:40:50 by savaquer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_large(t_list **stack_a, t_list **stack_b, int size)
{
	int	chunk_size;

	if (size <= 100)
		chunk_size = 20;
	else
		chunk_size = 45;
	move_to_b (stack_a, stack_b, chunk_size);
	move_to_a (stack_a, stack_b);
}

void	move_to_b(t_list **stack_a, t_list **stack_b, int chunk_size)
{
	int	max_index;

	max_index = chunk_size - 1;
	while (*stack_a)
	{
		if ((*stack_a)->index <= max_index)
		{
			push_b(stack_a, stack_b);
			if ((*stack_b)->index < max_index - (chunk_size / 2))
				rotate_b(stack_b);
		}
		else
			rotate_a(stack_a);
		if (stack_size(*stack_b) >= max_index + 1)
			max_index += chunk_size;
	}
}

void	move_to_a(t_list **stack_a, t_list **stack_b)
{
	int	max_pos;
	int	size;

	while (*stack_b)
	{
		max_pos = find_max_position(*stack_b);
		size = stack_size(*stack_b);
		if (max_pos <= size / 2)
		{
			while (max_pos-- > 0)
				rotate_b(stack_b);
		}
		else
		{
			while (max_pos++ < size)
				reverse_rotate_b(stack_b);
		}
		push_a(stack_a, stack_b);
	}
}
