/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aglanuss <aglanuss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 22:54:53 by aglanuss          #+#    #+#             */
/*   Updated: 2023/10/15 15:06:56 by aglanuss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

static int	count_words(char const *str, char c)
{
	int	i;
	int	count;
	int	trigger;

	i = 0;
	count = 0;
	trigger = 0;
	while (str[i])
	{
		if (str[i] != c && trigger == 0)
		{
			count++;
			trigger = 1;
		}
		else if (str[i] == c)
			trigger = 0;
		i++;
	}
	return (count);
}

char	*fill_array(char const *s, char c, int j)
{
	char	*ptr;
	int		trigger;
	int		from;

	trigger = 0;
	from = j;
	// "    f hola como estas    "
	while (s[j] == '\0' || s[j] == c && trigger == 1)
	{
		if (s[j] != c)
		{
			from = j;
			trigger = 1;
		}
		j++;
	}
	ptr = ft_substr(s, from, (j - from));
	if (!ptr)
		return (NULL);
	return (ptr);
}

char	**ft_split(char const *s, char c)
{
	char	**ptr;
	int		words;
	int		i;
	int		j;

	words = count_words(s, c);
	ptr = (char **)malloc(words * sizeof(char **));
	if (!ptr)
		return (NULL);
	i = 0;
	j = 0;
	while (i < words)
	{
		// handle alloc memory fail
		ptr[i] = fill_array(s, c, j);
		i++;
	}
	return (ptr);
}








void	ft_putstr(char *str)
{
	printf("%s", str);
}

void print_str(char **split)
{
	int i = 0;

	while (split[i])
	{
		ft_putstr(split[i]);
		i++;
	}
}

int main()
{
	// printf("test1 -> %i\n", count_words("hola que tal", ' '));  // output: 3
	// printf("test2 -> %i\n", count_words("", ' '));						  // output: 0
	// printf("test3 -> %i\n", count_words(" ", ' '));						  // output: 0
	// printf("test4 -> %i\n", count_words("abcd", ' '));				  // output: 1
	// printf("test5 -> %i\n", count_words("abcd", 'a'));				  // output: 1
	// printf("test6 -> %i\n", count_words("a", 'a'));				      // output: 0
	// printf("test7 -> %i\n", count_words("  abcd  ", ' '));		  // output: 1


	print_str(ft_split("hola que tal", ' '));

	// // output: hola
	// ft_striteri(ft_split("hola", ' '), ft_putstr);

	// // output: ""
	// ft_striteri(ft_split("", ' '), ft_putstr);

	// // output:
	// // hola
	// // que
	// // tal
	// ft_striteri(ft_split("hola que tal", ' '), ft_putstr);

	// // output:
	// // bc
	// // bc
	// // bc
	// ft_striteri(ft_split("abcabcabc", 'a'), ft_putstr);

	// // output:
	// // ""
	// // abc
	// // ""
	// ft_striteri(ft_split("  abc  ", ' '), ft_putstr);
	return 1;
}