/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvtorre <alvtorre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 20:58:36 by alvtorre          #+#    #+#             */
/*   Updated: 2022/05/24 20:07:43 by alvtorre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Converts the initial portion of the string pointed to by str 
// to int representation.

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int			i;
	int			sign;
	long long	n;

	i = 0;
	sign = 1;
	n = 0;
	while (nptr[i] == ' ' || nptr[i] == '\n' || nptr[i] == '\t' || \
			nptr[i] == '\v' || nptr[i] == '\f' || nptr[i] == '\r')
		i++;
	if (nptr[i] == '-')
		sign *= -1;
	if (nptr[i] == '-' || nptr[i] == '+')
		i++;
	while (nptr[i] && nptr[i] >= '0' && nptr[i] <= '9')
	{
		if (n * sign > 2147483647)
			return (-1);
		else if (n * sign < -2147483648)
			return (0);
		else
			n = n * 10 + (nptr[i] - '0');
		i++;
	}
	return (n * sign);
}
