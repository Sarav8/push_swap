/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: savaquer <savaquer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/01 18:23:59 by savaquer          #+#    #+#             */
/*   Updated: 2025/10/14 22:03:29 by savaquer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*p1;
	unsigned char	*p2;
	size_t			i;

	p1 = (unsigned char *)s1;
	p2 = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (p1[i] == p2[i])
		{
			i++;
		}
		else
		{
			return (p1[i] - p2[i]);
		}
	}
	return (0);
}
/*
int main(void)
{
		char arr1[]= "hello";
		char arr2[]= "holli";
		printf("My function: ""%d\n", ft_memcmp(arr1, arr2, 8));
		printf("Original: ""%d\n", memcmp(arr1, arr2, 8));
}
*/