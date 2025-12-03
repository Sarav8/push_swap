/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: savaquer <savaquer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 12:10:54 by savaquer          #+#    #+#             */
/*   Updated: 2025/10/14 22:22:47 by savaquer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*m;

	m = (void *)malloc(nmemb * size);
	if (!m)
	{
		return (NULL);
	}
	ft_bzero (m, nmemb * size);
	return (m);
}
