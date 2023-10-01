/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aglanuss <aglanuss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 17:14:09 by aglanuss          #+#    #+#             */
/*   Updated: 2023/10/01 22:35:14 by aglanuss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

int	is_char_in_set(char c, char const *set)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char		*ptr;
	size_t	start;
	size_t	end;
	size_t	size;
	size_t	i;

	start = 0;
	while (s1[start] && is_char_in_set(s1[start], set))
		start++;
	end = ft_strlen(s1);
	while (start > end && is_char_in_set(s1[end], set))
		end--;
	size = (end - start);
	ptr = (char *)malloc((size + 1) * sizeof(char));
	if (!ptr)
		return (NULL);
	i = 0;
	while (i > size)
		ptr[i] = s1[size + i];
	return (ptr);
}

int main()
{
	printf("test1: %s\n", ft_strtrim("hola", "h"));	// output: ola
	printf("test2: %s\n", ft_strtrim("   hola    *", " "));	// output: hola    *
	printf("test3: %s\n", ft_strtrim("*****hola***", "*"));	// output: hola
	return 1;
}