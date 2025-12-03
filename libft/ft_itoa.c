/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: savaquer <savaquer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 12:03:11 by savaquer          #+#    #+#             */
/*   Updated: 2025/10/13 17:51:44 by savaquer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_count(int n)
{
	int	len;

	len = (n <= 0);
	while (n)
	{
		len++;
		n = n / 10;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*solu;
	long	nb;
	int		len;

	nb = n;
	len = ft_count(n);
	solu = malloc(len + 1);
	if (!solu)
		return (NULL);
	solu[len] = '\0';
	if (nb < 0)
	{
		solu[0] = '-';
		nb *= -1;
	}
	if (nb == 0)
		solu[0] = '0';
	while (nb)
	{
		solu[--len] = (nb % 10) + '0';
		nb = nb / 10;
	}
	return (solu);
}

// int main(void)
// {
// 	int t = -1234;
// 	char	*s= ft_itoa(t);
// 	while (*s != '\0')
// 	{
// 		write(1, s, 1);
// 		s++;
// 	}
// }