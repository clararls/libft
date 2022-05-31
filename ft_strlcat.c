/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crojano- <crojano-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 21:33:28 by crojano-          #+#    #+#             */
/*   Updated: 2022/05/13 17:51:26 by crojano-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	unsigned int	i;
	unsigned int	m;
	unsigned int	c;

	i = 0;
	m = 0;
	c = 0;
	while (src[c] != '\0')
		c++;
	while (dst[m] != '\0')
		m++;
	while (src[i] != '\0' && (m + i + 1 < size))
	{
		dst[m + i] = src[i];
		i++;
	}
	dst[m + i] = '\0';
	if (size > m)
		return (m + c);
	else
		return (c + size);
}
