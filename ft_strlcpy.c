/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aglanuss <aglanuss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 12:55:16 by aglanuss          #+#    #+#             */
/*   Updated: 2023/10/17 21:57:40 by aglanuss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <string.h>
#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	if (dstsize == 0)
		return (ft_strlen(src));
	i = 0;
	while (i < (dstsize - 1) && src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (ft_strlen(src));
}

// int main()
// {
// 	char dst[] = "hola";
// 	char ft_dst[] = "hola";
// 	char *src = "lorem ipsum dolor sit amet";
// 	int	size = 5;

// 	printf("Before strlcpy:\n");
// 	printf("dst 	-> %s\n", dst);
// 	printf("ft_dst  -> %s\n", dst);
// 	printf("src     -> %s\n\n", src);

// 	printf("strlcpy    -> %lu\n", strlcpy(dst, src, size));
// 	printf("ft_strlcpy -> %lu\n\n", ft_strlcpy(ft_dst, src, size));

// 	printf("After strlcpy:\n");
// 	printf("dst    -> %s\n", dst);
// 	printf("ft_dst -> %s\n", ft_dst);
// 	printf("src    -> %s\n", src);
// 	return 1;
// }
