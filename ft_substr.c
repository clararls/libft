/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crojano- <crojano-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 11:21:06 by crojano-          #+#    #+#             */
/*   Updated: 2022/05/31 11:21:06 by crojano-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, unsigned int len)
{
	unsigned int	len_s;
	unsigned int	size;
	char			*ptr;
	unsigned int	i;

	if (!s)
		return (0);
	len_s = ft_strlen(s);
	if ((len_s - start) > len)
		size = len + 1;
	else
		size = len_s - start + 1;
	if (start >= len_s)
		size = 1;
	ptr = (char *) malloc(sizeof(char) * size);
	if (ptr == 0)
		return (ptr);
	i = 0;
	while (s[start + i] && i < len && start < len_s)
	{
		ptr[i] = s[start + i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
