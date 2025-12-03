/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: savaquer <savaquer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 11:56:17 by savaquer          #+#    #+#             */
/*   Updated: 2025/10/06 12:00:30 by savaquer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (little[i] == '\0')
		return ((char *)big);
	while (big[i] != '\0' && i < len)
	{
		while (i + j < len && big[i + j] == little[j])
		{
			j++;
			if (little[j] == '\0')
			{
				return ((char *)&big[i]);
			}
		}
		j = 0;
		i++;
	}
	return (NULL);
}
/*
int main(void)
{
    char *s = "hola como estas";
    char *d = "como";
    printf("My function: ""%s\n", (char*)ft_strnstr(s, d, 10));
    //printf("Original: ""%s\n", (char *)strnstr(s, d, 10));
}*/
