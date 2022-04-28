/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crojano- <crojano-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 20:14:06 by crojano-          #+#    #+#             */
/*   Updated: 2022/04/25 19:23:14 by crojano-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>

int				ft_isalpha(int c);
int				ft_isdigit(int c);
int			    ft_isalnum(int c);
int				ft_isascii(int c);
int				ft_isprint(int c);
int	    		ft_strlen(const char *s);
void			*ft_memset(void *b, int c, size_t len);
void			ft_bzero(void *s, size_t n);
void			*ft_memcpy(void *dst, const void *src, size_t n);
void			*ft_memmove(void *dst, const void *src, size_t len);
unsigned int	ft_strlcpy(char *dst, const char *src, unsigned int size);
unsigned int	ft_strlcat(char *dst, const char *src, unsigned int size);

#endif