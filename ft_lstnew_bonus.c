/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilchahbi <ilchahbi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 11:57:31 by ilchahbi          #+#    #+#             */
/*   Updated: 2023/12/06 10:07:46 by ilchahbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*nd;

	nd = malloc(sizeof(t_list));
	if (!nd)
		return (0);
	nd->content = content;
	nd->next = NULL;
	return (nd);
}
