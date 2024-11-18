/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agulanus <agulanus@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 10:03:25 by agulanus          #+#    #+#             */
/*   Updated: 2024/11/18 19:10:40 by agulanus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

/**
 * Compare strings.
 *
 * The ft_strncmp() function lexicographically compare the null-terminated
 * strings s1 and s2.
 * ft_strncmp() is designed for comparing strings rather than binary data,
 * characters that appear after a ‘\0’ character are not compared.
 * 
 * ft_strncmp() functions return an integer greater than, equal to, or less
 * than 0, according as the string s1 is greater than, equal to, or less than
 * the string s2.  The comparison is done using unsigned characters,
 * so that ‘\200’ is greater than ‘\0’.
 */
int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;

	if (n == 0)
		return (0);
	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	while (--n > 0 && *str1 == *str2 && *str1 != '\0')
	{
		str1++;
		str2++;
	}
	return (*str1 - *str2);
}
