/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mov_rerotate.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: savaquer <savaquer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/04 16:58:43 by savaquer          #+#    #+#             */
/*   Updated: 2025/12/04 17:32:23 by savaquer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	reverse_rotate_a(t_list **stack_a)
{
	t_list	*last;
	t_list	*penultimate;

	if (!stack_a || !(*stack_a) || !(*stack_a)->next)
		return ;
	penultimate = *stack_a;
	while (penultimate->next->next)
		penultimate = penultimate->next;
	last = penultimate->next;
	penultimate->next = NULL;
	last->next = *stack_a;
	*stack_a = last;
	write (1, "rra\n", 4);
}

void	reverse_rotate_b(t_list **stack_b)
{
	t_list	*last;
	t_list	*penultimate;

	if (!stack_b || !(*stack_b) || !(*stack_b)->next)
		return ;
	penultimate = *stack_b;
	while (penultimate->next->next)
		penultimate = penultimate->next;
	last = penultimate->next;
	penultimate->next = NULL;
	last->next = *stack_b;
	*stack_b = last;
	write (1, "rrb\n", 4);
}

void	reverse_rotate_r(t_list **stack_a, t_list **stack_b)
{
	reverse_rotate_a(stack_a);
	reverse_rotate_b(stack_b);
	write(1, "rrr\n", 4);
}
