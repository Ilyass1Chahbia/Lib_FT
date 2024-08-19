/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilchahbi <ilchahbi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 09:42:11 by ilchahbi          #+#    #+#             */
/*   Updated: 2023/12/13 08:28:47 by ilchahbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	d_len;
	size_t	s_len;
	int		src_index;
	size_t	t_len;
	size_t	size_f;

	if (!dst && dstsize == 0)
		return (ft_strlen(src));
	d_len = ft_strlen(dst);
	s_len = ft_strlen(src);
	t_len = d_len + s_len;
	size_f = dstsize - d_len - 1;
	src_index = 0;
	if (d_len >= dstsize)
		return (dstsize + s_len);
	while (src[src_index] != '\0' && size_f > 0)
	{
		dst[d_len + src_index] = src[src_index];
		src_index++;
		size_f--;
	}
	dst[d_len + src_index] = '\0';
	return (t_len);
}
