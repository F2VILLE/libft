/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdeville <fdeville@student.42belgium.be    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 11:33:18 by fdeville          #+#    #+#             */
/*   Updated: 2025/10/20 11:35:01 by fdeville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "_bonus.h"
#include <stdlib.h>

int	ft_lstsize(t_list *lst)
{
	int	i;
	int	c;

	i = 0;
	c = lst;
	while (c)
	{
		c = lst->next;
		i++;
	}
	return (i);
}