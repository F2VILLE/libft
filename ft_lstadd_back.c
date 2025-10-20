/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdeville <fdeville@student.42belgium.be    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 11:39:02 by fdeville          #+#    #+#             */
/*   Updated: 2025/10/20 11:42:26 by fdeville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "_bonus.h"
#include <stdlib.h>

t_list	*ft_lstlast(t_list *lst);

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*l;

	if (!new || !l)
		return ;
	l = ft_lstlast(*lst);
	if (!l)
		*lst = new;
	else
		l->next = new;
}
