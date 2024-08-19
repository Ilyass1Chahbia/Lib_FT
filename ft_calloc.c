/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilchahbi <ilchahbi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 12:53:49 by ilchahbi          #+#    #+#             */
/*   Updated: 2023/12/13 06:48:12 by ilchahbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	unsigned char	*array;
	size_t			l;
	size_t			i;

	i = 0;
	l = count * size;
	array = (void *)malloc(l);
	if (!array)
		return (0);
	while (i < l)
	{
		array[i] = 0;
		i++;
	}
	return (array);
}
