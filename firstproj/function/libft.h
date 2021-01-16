/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ametta <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/12 13:12:20 by ametta            #+#    #+#             */
/*   Updated: 2021/01/12 15:21:54 by ametta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
# include <stddef.h>

void	*ft_memset(void *b, int c, size_t len);
void bzero(void *s, int nbyte);
void *memcpy(void *dst, const void *src, size_t n);
void *memccpy(void *dst, const void *src, int c, size_t n);
void *memmove(void *dst, const void *src, size_t len);
void *memchr(const void *s, int c, size_t n);
int	memcmp(const void *s1, const void *s2, size_t n);
int	ft_strlen (char *s);
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);
