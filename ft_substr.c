/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agulanus <agulanus@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 17:58:53 by agulanus          #+#    #+#             */
/*   Updated: 2024/11/15 00:14:14 by agulanus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Allocates (with malloc(3)) and returns a substring from the string ’s’.
 * The substring begins at index ’start’ and is of maximum size ’len’.
 */
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	str_len;
	size_t	substr_len;

	if (!s)
		return (NULL);
	str_len = ft_strlen(s);
	substr_len = 0;
	if (start < str_len)
		substr_len = ft_strlen(&s[start]);
	if (len < substr_len)
		substr_len = len;
	substr = (char *)malloc((substr_len + 1) * sizeof(char));
	if (!substr)
		return (NULL);
	if (start >= str_len)
		ft_strlcpy(substr, s, substr_len + 1);
	else
		ft_strlcpy(substr, s + start, substr_len + 1);
	return (substr);
}
