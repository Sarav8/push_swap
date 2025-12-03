/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: savaquer <savaquer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 17:59:58 by savaquer          #+#    #+#             */
/*   Updated: 2025/10/14 19:57:26 by savaquer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_countwords(const char *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i] && s[i] != c)
		{
			count++;
			while (s[i] && s[i] != c)
				i++;
		}
	}
	return (count);
}

char	*ft_mallocword(const char *s, int start, int end)
{
	int		len;
	char	*n;
	int		i;

	i = 0;
	len = end - start;
	n = malloc(len + 1);
	if (!n)
	{
		return (NULL);
	}
	while (start < end)
	{
		n[i] = s[start];
		i++;
		start++;
	}
	n[i] = '\0';
	return (n);
}

void	ft_free_split(char **split)
{
	int	i;

	i = 0;
	while (split[i])
	{
		free(split[i]);
		i++;
	}
	free(split);
}

static	char	**ft_fill_split(char const *s, char c, char **sol)
{
	int	i;
	int	j;
	int	start;

	i = 0;
	j = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		start = i;
		while (s[i] && s[i] != c)
			i++;
		if (i > start)
		{
			sol[j] = ft_mallocword(s, start, i);
			if (!sol[j++])
				return (ft_free_split(sol), NULL);
		}
	}
	sol[j] = NULL;
	return (sol);
}

char	**ft_split(char const *s, char c)
{
	char	**sol;

	if (!s)
		return (NULL);
	sol = malloc(sizeof(char *) * (ft_countwords(s, c) + 1));
	if (!sol)
		return (NULL);
	return (ft_fill_split(s, c, sol));
}
