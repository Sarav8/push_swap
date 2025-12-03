/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: savaquer <savaquer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/01 16:09:35 by savaquer          #+#    #+#             */
/*   Updated: 2025/10/14 22:03:33 by savaquer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*p;
	size_t			i;

	i = 0;
	p = (unsigned char *)s;
	while (i < n)
	{
		if ((unsigned char)c == p[i])
		{
			return ((void *)&p[i]);
		}
		i++;
	}
	return (NULL);
}
/*
int main(void)
{
	char arr[]= "hello world";
	printf("My function: " "%p\n", ft_memchr(arr, 'w' , 8));
	printf("Original: ""%p\n", memchr(arr, 'w', 8));
	return(0); 
}
*/