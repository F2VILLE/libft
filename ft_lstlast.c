/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdeville <fdeville@student.42belgium.be    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 11:35:09 by fdeville          #+#    #+#             */
/*   Updated: 2025/10/20 12:33:01 by fdeville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst);

t_list	*ft_lstlast(t_list *lst)
{
	int		s;
	t_list	*l;

	s = ft_lstsize(lst);
	l = lst;
	while (--s > 0)
		l = l->next;
	return (l);
}
