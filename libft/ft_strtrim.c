/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: savaquer <savaquer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 13:45:27 by savaquer          #+#    #+#             */
/*   Updated: 2025/10/13 17:42:16 by savaquer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_scmp(char c, char const *str)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;
	int		t;
	char	*sol;

	i = 0;
	if (!s1 || !set)
		return (NULL);
	while (s1[i] != '\0' && ft_scmp(s1[i], set))
		i++;
	j = ft_strlen(s1);
	while (j > i && ft_scmp(s1[j - 1], set))
		j--;
	sol = malloc(j - i + 1);
	if (!sol)
		return (NULL);
	t = 0;
	while (i < j)
	{
		sol[t] = s1[i];
		t++;
		i++;
	}
	sol[t] = '\0';
	return (sol);
}
