/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilchahbi <ilchahbi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 10:35:03 by ilchahbi          #+#    #+#             */
/*   Updated: 2023/12/13 07:33:59 by ilchahbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count(long c)
{
	int	cnt;

	cnt = 0;
	if (c == 0)
		return (1);
	if (c < 0)
	{
		c = -c;
		cnt++;
	}
	while (c > 0)
	{
		c = c / 10;
		cnt++;
	}
	return (cnt);
}

char	*ft_itoa(int c)
{
	int		l;
	char	*s;
	long	nb;

	nb = c;
	l = count(c);
	s = (char *)malloc(sizeof(char) * (l + 1));
	if (!s)
		return (0);
	s[l] = '\0';
	if (nb == 0)
		s[0] = '0';
	if (nb < 0)
	{
		s[0] = '-';
		nb = -nb;
	}
	while (nb != 0)
	{
		s[l - 1] = (nb % 10) + 48;
		nb = nb / 10;
		l--;
	}
	return (s);
}
