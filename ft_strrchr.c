/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agulanus <agulanus@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 19:09:14 by agulanus          #+#    #+#             */
/*   Updated: 2025/02/11 12:40:16 by agulanus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Locate character in string.
 *
 * The ft_strrchr() function locates the last occurrence of c
 * (converted to a char) in the string pointed to by s. The terminating null
 * character is considered to be part of the string; therefore if c is ‘\0’,
 * the functions locate the terminating ‘\0’.
 *
 * The function ft_strrchr() return a pointer to the located character,
 * or NULL if the character does not appear in thestring.
 */
char	*ft_strrchr(const char *s, int c)
{
	char		ch;
	const char	*last;

	ch = (char)c;
	last = NULL;
	while (*s != '\0')
	{
		if (*s == ch)
			last = s;
		s++;
	}
	if (ch == '\0')
		last = s;
	return ((char *)last);
}
