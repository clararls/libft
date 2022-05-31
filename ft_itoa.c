/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crojano- <crojano-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 12:22:42 by crojano-          #+#    #+#             */
/*   Updated: 2022/05/31 12:22:42 by crojano-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#define SIZE 20

char	*ft_itoa(int n)
{
	char	cache[SIZE];
	int		i;
	long	num;
	int		sign;

	i = SIZE - 1;
	num = (long) n;
	sign = 0;
	if (num < 0)
	{
		num = -num;
		sign = 1;
	}
	cache[i--] = '\0';
	while (num > 0)
	{
		cache[i--] = (char)(num % 10 + '0');
		num /= 10;
	}
	if (sign)
		cache[i--] = '-';
	if (n == 0)
		cache[i--] = '0';
	return (ft_strdup(&cache[i + 1]));
}
