/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilchahbi <ilchahbi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 16:48:46 by ilchahbi          #+#    #+#             */
/*   Updated: 2023/12/06 10:08:05 by ilchahbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*dest;
	unsigned char	*sorc;

	dest = (unsigned char *)dst;
	sorc = (unsigned char *)src;
	if (!dest && !sorc)
		return (NULL);
	if (dest < sorc)
		ft_memcpy(dest, sorc, len);
	else
	{
		while (len-- > 0)
		{
			dest[len] = sorc[len];
		}
	}
	return (dest);
}
