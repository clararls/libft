/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crojano- <crojano-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/08 11:08:05 by crojano-          #+#    #+#             */
/*   Updated: 2022/05/13 17:53:44 by crojano-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(unsigned long count, unsigned long size)
{
	char			*ptr;
	unsigned int	i;

	if (count + size < count || count + size < size)
		return (0);
	ptr = (char *) malloc(count * size);
	if (ptr == 0)
		return (0);
	i = 0;
	while (i < (count * size))
		ptr[i++] = 0;
	return ((void *) ptr);
}
