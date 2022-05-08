/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crojano- <crojano-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/08 10:47:54 by crojano-          #+#    #+#             */
/*   Updated: 2022/05/08 10:47:54 by crojano-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, unsigned int len)
{
	unsigned int	len_ndle;
	unsigned int	i;

	len_ndle = ft_strlen(needle);
	if (len_ndle == 0)
		return ((char *) haystack);
	if (len == 0)
		return (0);
	i = 0;
	while (haystack[i] && i <= (len - len_ndle))
	{
		if (!ft_strncmp(&haystack[i], needle, len_ndle))
			return ((char *) &haystack[i]);
		i++;
	}
	return (0);
}
