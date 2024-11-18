/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agulanus <agulanus@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 16:15:23 by agulanus          #+#    #+#             */
/*   Updated: 2024/11/18 19:10:16 by agulanus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

/**
 * Save a copy of a string.
 *
 * The ft_strdup() function allocates sufficient memory for a copy of the
 * string s1, does the copy, and returns a pointer to it. The pointer may
 * subsequently be used as an argument to the function free(3).
 * 
 * If insufficient memory is available, NULL is returned and errno is set
 * to ENOMEM.
 */
char	*ft_strdup(const char *s1)
{
	char	*str;
	size_t	len;

	len = ft_strlen(s1);
	str = (char *)ft_calloc(len + 1, sizeof(char));
	if (!str)
		return (NULL);
	return (ft_memcpy(str, s1, len));
}
