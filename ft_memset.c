/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilchahbi <ilchahbi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 16:05:10 by ilchahbi          #+#    #+#             */
/*   Updated: 2023/12/12 10:58:02 by ilchahbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	*ar;

	ar = (unsigned char *) b;
	i = 0;
	while (i < len)
	{
		ar[i] = (unsigned char)c;
		i++;
	}
	return (b);
}
