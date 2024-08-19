/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilchahbi <ilchahbi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 15:01:38 by ilchahbi          #+#    #+#             */
/*   Updated: 2023/12/06 10:07:56 by ilchahbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*st;

	st = (unsigned char *) s;
	i = 0;
	while (i < n)
	{
		if (st[i] == (unsigned char)c)
			return ((void *)&st[i]);
		i++;
	}
	return (NULL);
}
