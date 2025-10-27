/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdeville <fdeville@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 23:32:08 by fdeville          #+#    #+#             */
/*   Updated: 2025/10/27 20:22:00 by fdeville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <limits.h>

void	*ft_calloc(size_t n, size_t size)
{
	unsigned char	*p;
	size_t			i;

	p = NULL;
	i = 0;
	if (n == 0 || size == 0)
	{
		p = malloc(0);
		if (!p)
			return (NULL);
		return (p);
	}
	if ((n * size) / size != n)
		return (NULL);
	p = (unsigned char *)malloc(n * size);
	if (!p)
		return (NULL);
	while (i < n * size)
	{
		p[i] = 0;
		i++;
	}
	return ((void *)p);
}
