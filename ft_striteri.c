/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdeville <fdeville@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 00:18:52 by fdeville          #+#    #+#             */
/*   Updated: 2025/10/27 20:26:00 by fdeville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int	i;

	i = 0;
	if (!s)
		return (NULL);
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}
