/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agulanus <agulanus@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 10:32:37 by agulanus          #+#    #+#             */
/*   Updated: 2024/11/19 15:44:05 by agulanus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

/**
 * Allocates (with malloc(3)) and returns a copy of ’s1’ with the characters
 * specified in ’set’ removed from the beginning and the end of the string.
 */
char	*ft_strtrim(char const *s1, char const *set)
{
	char	*ptr;
	char	lookup[UCHAR_MAX + 1];
	size_t	i;

	ft_bzero(lookup, sizeof(lookup));
	i = -1;
	while (set[++i] != '\0')
		lookup[(unsigned char)set[i]] = 1;
	while (*s1 != '\0' && lookup[(unsigned char)*s1] != 0)
		s1++;
	i = ft_strlen(s1);
	if (i == 0)
		ptr = ft_strdup("");
	else
	{
		while (i > 0 && lookup[(unsigned char)s1[i - 1]] == 1)
			i--;
		ptr = (char *)malloc(sizeof(char) * (i + 1));
		if (!ptr)
			return (NULL);
		ft_strlcpy(ptr, s1, i + 1);
	}
	return (ptr);
}
