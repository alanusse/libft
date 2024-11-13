/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agulanus <agulanus@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 12:16:01 by agulanus          #+#    #+#             */
/*   Updated: 2024/11/14 00:54:09 by agulanus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Locate a substring in a string.
 *
 * The ft_strnstr() function locates the first occurrence of the null-terminated
 * string needle in the string haystack, where not more than len characters
 * are searched. Characters that appear after a ‘\0’ character are not searched.
 *
 * If needle is an empty string, haystack is returned; if needle occurs nowhere
 * in haystack, NULL is returned; otherwise a pointer to the first character of
 * the first occurrence of needle is returned.
 */
char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	needle_len;
	size_t	count;
	char	*str;

	needle_len = ft_strlen(needle);
	str = (char *)haystack;
	if (needle_len == 0)
		return (str);
	while (len > 0 && *str != '\0')
	{
		if (*str == needle[0])
		{
			count = 0;
			while (str[count] && needle[count]
				&& (len - count) > 0 && str[count] == needle[count])
				count++;
			if (count == needle_len)
				return (str);
		}
		len--;
		str++;
	}
	return (NULL);
}
