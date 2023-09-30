/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aglanuss <aglanuss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 17:14:09 by aglanuss          #+#    #+#             */
/*   Updated: 2023/09/30 22:01:49 by aglanuss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

int	ft_get_size(char const *str, char const *set)
{
	size_t	i;
	size_t	j;
	size_t	size;
	size_t	set_len;

	i = 0;
	j = 0;
	size = 0;
	set_len = ft_strlen(set);
	while (str[i] != '\0')
	{
		if (str[i] == set[0] && ft_strncmp(&str[i], set, set_len) == 0)
			i += set_len;
		else
		{
			size++;
			i++;
		}
	}
	return (size);
}

static int
	ft_char_in_set(char c, char const *set)
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

char
	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	size_t	i;
	size_t	start;
	size_t	end;

	start = 0;
	while (s1[start] && ft_char_in_set(s1[start], set))
		start++;
	end = ft_strlen(s1);
	while (end > start && ft_char_in_set(s1[end - 1], set))
		end--;
	str = (char*)malloc(sizeof(*s1) * (end - start + 1));
	if (!str)
		return (NULL);
	i = 0;
	while (start < end)
		str[i++] = s1[start++];
	str[i] = 0;
	return (str);
}

int main()
{
	printf("test1: %s\n", ft_strtrim("hola como estas", "o"));	// output: hla cm estas
	printf("test2: %s\n", ft_strtrim("hola como estas", "mo")); // output: hola co estas
	printf("test3: %s\n", ft_strtrim("hola como estas", ""));		// output: hola como estas
	printf("test4: %s\n", ft_strtrim("hola", "hola"));					// output: ""
	printf("test5: %s\n", ft_strtrim("", "hola"));							// output: ""
	printf("test6: %s\n", ft_strtrim("hola como estas", " "));	// output: holacomoestas
	printf("test7: %s\n", ft_strtrim("", ""));									// output: ""
	printf("test8: %s\n", ft_strtrim("hola como estas", " c")); // output: holaomo estas
	return 1;
}