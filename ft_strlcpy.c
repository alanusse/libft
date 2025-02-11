/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agulanus <agulanus@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 16:20:55 by agulanus          #+#    #+#             */
/*   Updated: 2025/02/11 12:40:16 by agulanus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Size-bounded string copying.
 *
 * ft_strlcpy() copies up to dstsize - 1 characters from the string src to dst,
 * NUL-terminating the result if dstsize is not 0.
 * If the src and dst strings overlap, the behavior is undefined.
 *
 * The ft_strlcpy() function return the total length of the string they tried
 * to create. That means the length of src.
 */
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	src_len;

	src_len = ft_strlen(src);
	if (dstsize > 0)
	{
		while (--dstsize && *src != '\0')
			*dst++ = *src++;
		*dst = '\0';
	}
	return (src_len);
}
