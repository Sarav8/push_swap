/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: savaquer <savaquer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 12:27:15 by savaquer          #+#    #+#             */
/*   Updated: 2025/10/07 18:44:33 by savaquer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*c;
	size_t	j;
	size_t	real_len;

	if (!s)
		return (NULL);
	real_len = ft_strlen(s);
	if (start >= real_len)
		return (ft_strdup(""));
	if (len > real_len - start)
		len = real_len - start;
	c = malloc (len + 1);
	if (!c)
		return (NULL);
	j = 0;
	while (s[start + j] && j < len)
	{
		c[j] = s[start + j];
		j++;
	}
	c[j] = '\0';
	return (c);
}
/*
int main(void)
{
    char *d = "hola";
    printf("%s\n", ft_substr(d, 0, 1));
}*/