/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: savaquer <savaquer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/03 13:43:44 by savaquer          #+#    #+#             */
/*   Updated: 2025/10/14 22:09:29 by savaquer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	l;

	l = ft_strlen(s);
	while (l + 1)
	{
		if (s[l] == (char)c)
		{
			return ((char *)&s[l]);
		}
		l--;
	}
	return (NULL);
}
/*
int main()
{
    char arr[] = "teste";
    printf("My function: ""%p\n", ft_strrchr(arr, 'e'));
    printf("Original: ""%p\n", strrchr(arr, 'e'));
    return(0);
}*/