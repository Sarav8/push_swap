/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: savaquer <savaquer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/04 17:38:13 by savaquer          #+#    #+#             */
/*   Updated: 2025/12/04 18:01:56 by savaquer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct s_list
{
	int				num;
	int				index;
	struct s_list	*next;
}	t_list;

//indexing
int			*create_array(t_list **stack_a, int size);
int			*sort_array(int *arr, int size);
void		assign_index(t_list *stack_a, int *arr, int size);
int			find_max_position(t_list *stack_b);

//stack_operations
t_list		*nodo_new(int num);
void		add_last(t_list **stack, int num);
void		free_stack(t_list **stack);
int			fill_stack(char *arg, t_list **stack_a);

//parsing
int			has_duplicates(char **numbers, int count);
int			num_valid(char *str);
int			check_argc(int argc);
int			parse_args(int argc, char **argv, t_list **stack_a);
int			has_duplicates_stack(t_list *stack);

//libft
long long	ft_atol(const char *nptr);
void		ft_free_split(char **split);
char		**ft_split(char const *s, char c);

//moves
void		swap_a(t_list **stack_a);
void		swap_b(t_list **stack_b);
void		ss(t_list **stack_a, t_list **stack_b);
void		push_a(t_list **stack_a, t_list **stack_b);
void		push_b(t_list **stack_a, t_list **stack_b);
void		rotate_a(t_list **stack_a);
void		rotate_b(t_list **stack_b);
void		rotate_r(t_list **stack_a, t_list **stack_b);
void		reverse_rotate_a(t_list **stack_a);
void		reverse_rotate_b(t_list **stack_b);
void		reverse_rotate_r(t_list **stack_a, t_list **stack_b);

//small
void		sort_two(t_list **stack_a);
void		sort_3(t_list **stack_a);
void		sort_4(t_list **stack_a, t_list **stack_b);
void		sort_5(t_list **stack_a, t_list **stack_b);

//large
void		sort_large(t_list **stack_a, t_list **stack_b, int size);
void		move_to_b(t_list **stack_a, t_list **stack_b, int chunk_size);
void		move_to_a(t_list **stack_a, t_list **stack_b);

//util_sort
int			find_min_position(t_list *stack);
int			get_position(t_list *stack, int n);
int			stack_size(t_list *stack);
void		bring_to_top(t_list **stack, int pos);
int			is_sorted(t_list *stack);
void		print_stack(t_list *stack, char *name);

//main
void		sort_controller(t_list **stack_a, t_list **stack_b, int size);
int			main(int argc, char **argv);

#endif