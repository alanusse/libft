/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agulanus <agulanus@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 18:54:24 by agulanus          #+#    #+#             */
/*   Updated: 2024/11/16 19:00:41 by agulanus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Applies the function f to each character of the string s, passing its index
 * as the first argument and the character itself as the second.
 * A new string is created (using malloc(3)) to collect the results from
 * the successive applications of f.
 */
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*ret;
	size_t	i;

	ret = ft_strdup(s);
	if (!ret)
		return (NULL);
	i = -1;
	while (ret[++i])
		ret[i] = f(i, ret[i]);
	return (ret);
}
