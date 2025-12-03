/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: savaquer <savaquer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 12:01:01 by savaquer          #+#    #+#             */
/*   Updated: 2025/10/07 12:26:37 by savaquer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*m;
	size_t	len;

	len = ft_strlen(s) + 1;
	m = malloc(len);
	if (!m)
	{
		return (NULL);
	}
	ft_strlcpy(m, s, len);
	return (m);
}
