/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agulanus <agulanus@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 17:23:32 by agulanus          #+#    #+#             */
/*   Updated: 2024/11/12 01:24:06 by agulanus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Size-bounded string concatenation.
 *
 * ft_strlcat() take the full size of the destination buffer and guarantee
 * NUL-termination if there is room. Note that room for the NUL should be
 * included in dstsize. Also note that ft_strlcat() only operate on
 * true 'C' strings. This means that both src and dst() must be NUL-terminated.
 *
 * ft_strlcat() appends string src to the end of dst. It will append at most
 * dstsize - strlen(dst) - 1 characters. It will then NUL-terminate, unless
 * dstsize is 0 or the original dst string was longer than dstsize (in practice
 * this should not happen as it means that either dstsize is incorrect or that
 * dst is not a proper string).
 *
 * If the src and dst strings overlap, the behavior is undefined.
 *
 * Return the total length of the string they tried to create. That means the
 * initial length of dst plus the length of src.
 */
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t			src_len;
	size_t			dst_len;
	size_t			i;

	src_len = ft_strlen(src);
	dst_len = ft_strlen(dst);
	if (dstsize <= dst_len)
		return (src_len + dstsize);
	i = dst_len;
	while (i < (dstsize - 1) && *src != '\0')
		dst[i++] = *src++;
	dst[i] = '\0';
	return (src_len + dst_len);
}
