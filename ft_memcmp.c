/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agulanus <agulanus@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 12:06:20 by agulanus          #+#    #+#             */
/*   Updated: 2025/02/11 12:40:16 by agulanus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Compare byte string.
 *
 * The ft_memcmp() function compares byte string s1 against byte string s2.
 * Both strings are assumed to be n bytes long.
 *
 * The ft_memcmp() function returns zero if the two strings are identical,
 * otherwise returns the difference between the first two differing bytes
 * (treated as unsigned char values, so that ‘\200’ is greater than ‘\0’,
 * for example). Zero-length strings are always identical.
 * This behavior is not required by C and portable code should only depend on
 * the sign of the returned value.
 */
int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;

	if (n == 0)
		return (0);
	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	while (--n > 0 && *str1 == *str2)
	{
		str1++;
		str2++;
	}
	return (*str1 - *str2);
}
