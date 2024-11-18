/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agulanus <agulanus@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 01:53:19 by agulanus          #+#    #+#             */
/*   Updated: 2024/11/18 19:09:50 by agulanus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

/**
 * Copy byte string.
 *
 * The ft_memmove() function copies len bytes from string src to string dst.
 * The two strings may overlap; the copy is always done in a non-destructive
 * manner.
 *
 * The ft_memmove() function returns the original value of dst.
 */
void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*d;
	unsigned char	*s;

	if (!dst && !src)
		return (NULL);
	d = (unsigned char *)dst;
	s = (unsigned char *)src;
	if (d > s)
		while (len--)
			d[len] = s[len];
	else
		dst = ft_memcpy(dst, src, len);
	return (dst);
}
