/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdeville <fdeville@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/02 02:19:58 by fdeville          #+#    #+#             */
/*   Updated: 2025/10/14 19:50:20 by fdeville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	val;
	size_t			i;

	val = (unsigned char)c;
	i = 0;
	while (i < len)
	{
		((unsigned char *)b)[i] = val;
		i++;
	}
	return (b);
}
