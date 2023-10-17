/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aglanuss <aglanuss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 16:08:18 by aglanuss          #+#    #+#             */
/*   Updated: 2023/10/17 21:58:09 by aglanuss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ptr;
	size_t	i;

	i = 0;
	if (start >= ft_strlen(s))
	{
		ptr = (char *)malloc(sizeof(char));
		if (!ptr)
			return (NULL);
		ptr[0] = '\0';
		return (ptr);
	}
	if (len >= ft_strlen(&s[start]))
		ptr = (char *)malloc((ft_strlen(&s[start]) + 1) * sizeof(char));
	else
		ptr = (char *)malloc((len + 1) * sizeof(char));
	if (!ptr)
		return (NULL);
	while (i < len && s[start + i] != '\0')
	{
		ptr[i] = s[start + i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}

// int main()
// {
// 	printf("test 1: %s\n", ft_substr("hola como estas", 5, 4)); // output: como
// 	printf("test 2: %s\n", ft_substr("hola como estas", 0, 15));
// output: hola como estas
//
// 	printf("test 3: %s\n", ft_substr("hola como estas", 0, 20000));
// output: hola como estas
//
// 	printf("test 4: %s\n", ft_substr("hola", 4, 0)); // output: ""
// 	printf("test 5: %s\n", ft_substr("hola", 5, 10)); // output: ""
// 	printf("test 6: %s\n", ft_substr("hola", 10, 10)); // output: ""
// 	printf("test 7: %s\n", ft_substr("hola", 3, 20)); // output: a
// 	return 1;
// }