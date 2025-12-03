/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: savaquer <savaquer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/02 12:08:02 by savaquer          #+#    #+#             */
/*   Updated: 2025/10/14 22:03:26 by savaquer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;
	size_t			i;

	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	i = 0;
	if (!dest && !src)
		return (NULL);
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	if (dest == src)
	{
		return (dest);
	}
	return (dest);
}
/*
int main(void)
{
		char dest[]= "> qW!RO,5PcSs c>>z/%6)UV[C73zq!";
		char src[]= "";
		printf("My function: ""%p\n", ft_memcpy(dest + 3, src +  0, 6));
		printf("Original: ""%p\n", memcpy(dest + 3, src + 0, 6));
		return(0);
}*/