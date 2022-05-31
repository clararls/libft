/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crojano- <crojano-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 12:08:27 by crojano-          #+#    #+#             */
/*   Updated: 2022/05/31 12:08:27 by crojano-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_in_str(char c, char *str)
{
	while (*str)
	{
		if (c == *str)
			return (1);
		str++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	unsigned int	start;
	unsigned int	len;
	unsigned int	i;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	while (is_in_str(s1[start], (char *) set))
		start++;
	len = 0;
	i = 0;
	while (s1[start + i])
	{
		if (!is_in_str(s1[start + i], (char *) set))
			len = i + 1;
		i++;
	}
	return (ft_substr(s1, start, len));
}
