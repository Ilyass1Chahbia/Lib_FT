/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilchahbi <ilchahbi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 08:18:47 by ilchahbi          #+#    #+#             */
/*   Updated: 2023/12/13 08:54:35 by ilchahbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		s;
	int		n;
	int		triml;
	char	*trimstr;
	int		i;

	s = 0;
	i = 0;
	if (!s1 || !set)
		return (0);
	n = ft_strlen(s1) - 1;
	while (s1[s] != '\0' && ft_strchr(set, s1[s]) != 0)
		s++;
	while (n > s && ft_strchr(set, s1[n]) != 0)
		n--;
	triml = n - s + 1;
	trimstr = (char *)malloc((triml + 1) * sizeof(char));
	if (!trimstr)
		return (0);
	while (i < triml)
		trimstr[i++] = s1[s++];
	trimstr[i] = '\0';
	return (trimstr);
}
