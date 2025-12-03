/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: savaquer <savaquer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/03 11:33:42 by savaquer          #+#    #+#             */
/*   Updated: 2025/10/14 22:03:23 by savaquer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*d;
	unsigned char	*s;

	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	if (!dest && !src)
		return (NULL);
	if (d < s || d >= s + n)
	{
		i = 0;
		while (i < n)
		{
			d[i] = s[i];
			i++;
		}
		return (dest);
	}
	else
	{
		i = n;
		while (i--)
			d[i] = s[i];
	}
	return (dest);
}
/*
int main(void)
{
    char s[6]  = "helloo";
    char d[6] = "";
    printf("My function move: ""%p\n", ft_memmove(d + 1, s + 0, 4));
    printf("Original move: ""%p\n", memmove(d + 1, s + 0, 4));
    return(0);
}*/
