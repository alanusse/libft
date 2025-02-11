/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agulanus <agulanus@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 10:55:51 by agulanus          #+#    #+#             */
/*   Updated: 2025/02/11 12:40:16 by agulanus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Locate byte in byte string.
 *
 * The ft_memchr() function locates the first occurrence of c
 * (converted to an unsigned char) in string s.
 *
 * The ft_memchr() function returns a pointer to the byte located, or NULL if
 * no such byte exists within n bytes.
 */
void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	unsigned char	ch;

	str = (unsigned char *)s;
	ch = (unsigned char)c;
	if (n == 0)
		return (NULL);
	while (--n > 0 && *str != ch)
		str++;
	if (*str == ch)
		return ((void *)str);
	return (NULL);
}
