/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: savaquer <savaquer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/01 11:43:55 by savaquer          #+#    #+#             */
/*   Updated: 2025/10/14 22:02:22 by savaquer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (c + 32);
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
		printf("My function: ""%d\n", ft_tolower(c));
		printf("Original: ""%d\n", tolower(c));
		printf("My function: ""%c\n", ft_tolower(c));
		printf("Original: ""%c\n", tolower(c));
		return(0);
}*/
