/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilchahbi <ilchahbi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 10:41:09 by ilchahbi          #+#    #+#             */
/*   Updated: 2023/12/06 21:10:05 by ilchahbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	index;

	index = 0;
	if (dstsize > 0)
	{
		while (src[index] != '\0' && index < dstsize - 1)
		{
			dst[index] = src[index];
			index++;
		}
		dst[index] = '\0';
	}
	index = 0;
	while (src[index] != '\0')
		index++;
	return (index);
}
