/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilchahbi <ilchahbi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 10:23:11 by ilchahbi          #+#    #+#             */
/*   Updated: 2023/12/12 19:03:35 by ilchahbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	long_n(unsigned long int n, int neg, int j)
{
	int	nb;

	nb = n;
	if (nb == -2147483648)
		return (-2147483648);
	if (j >= 20 && neg > 0)
		return (-1);
	if (n > ULONG_MAX && neg > 0)
		return (-1);
	if (n > ULONG_MAX && neg < 0)
		return (0);
	if (j >= 20 && neg < 0)
		return (0);
	return ((int)n * neg);
}

int	ft_atoi(const char *str)
{
	int	neg;
	int	n;
	int	i;
	int	j;

	neg = 1;
	i = 0;
	j = 0;
	n = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			neg *= -1;
		i++;
	}
	while (str[i] == '0')
		i++;
	while (str[i] >= 48 && str[i] <= 57)
	{
		n = n * 10 + str[i++] - 48;
		j++;
	}
	return (long_n(n, neg, j));
}
