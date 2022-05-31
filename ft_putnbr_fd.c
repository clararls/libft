/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crojano- <crojano-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 12:45:15 by crojano-          #+#    #+#             */
/*   Updated: 2022/05/31 12:45:15 by crojano-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long	num;

	num = n;
	if (num < 0)
	{
		ft_putchar_fd('-', fd);
		num = -num;
	}
	if (num < 10)
		ft_putchar_fd((char)(num + '0'), fd);
	else
	{
		ft_putnbr_fd((int)(num / 10), fd);
		ft_putchar_fd((char)(num % 10 + '0'), fd);
	}
}
