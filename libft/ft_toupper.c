/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: savaquer <savaquer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 19:57:35 by savaquer          #+#    #+#             */
/*   Updated: 2025/10/14 22:02:18 by savaquer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (c - 32);
	}
	else
	{
		return (c);
	}
}
/*
int main(void)
{
		int c = 'A';
		printf("My function: ""%d\n", ft_toupper(c));
		printf("Original: ""%d\n", toupper(c));
		printf("My function: ""%c\n", ft_toupper(c));
		printf("Original: ""%c\n", toupper(c));
		return(0);
}*/
