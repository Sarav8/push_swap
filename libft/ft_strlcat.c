/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: savaquer <savaquer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 17:57:44 by savaquer          #+#    #+#             */
/*   Updated: 2025/10/14 22:02:56 by savaquer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	s_len;
	size_t	d_len;

	i = 0;
	j = 0;
	d_len = ft_strlen (dst);
	s_len = ft_strlen(src);
	if (size <= d_len)
		return (s_len + size);
	while (dst[i] != '\0')
		i++;
	while (src[j] != '\0' && (i + 1) < size)
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	return (d_len + s_len);
}
/*
int main()
{
	char src[] = "Hola";
	char dst[5];
	printf("%s\n", (char *)ft_strlcat(dst, src, 4));
}*/