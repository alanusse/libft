/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aglanuss <aglanuss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 22:54:53 by aglanuss          #+#    #+#             */
/*   Updated: 2023/10/17 21:56:48 by aglanuss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include "libft.h"

static int	get_total_words(char *s, char c)
{
	int	total;
	int	total_letters;

	total = 0;
	total_letters = 0;
	while (*s)
	{
		while (*s == c && *s)
			s++;
		while (*s != c && *s)
		{
			total_letters++;
			s++;
			if (*s == '\0' || *s == c)
				total++;
		}
	}
	if (total == 0 && total_letters > 0)
		return (1);
	return (total);
}

static void	free_split_memory(char **split, size_t total_words)
{
	while (total_words-- > 0)
		free(split[total_words]);
	free(split);
}

static int	fill_split(char **split, char *s, char sep, size_t total_words)
{
	size_t	len_word;
	size_t	i;

	i = 0;
	split[total_words] = NULL;
	while (total_words > 0)
	{
		len_word = 0;
		while (*s == sep && *s)
			s++;
		while (s[len_word] != sep && s[len_word])
			len_word++;
		split[i] = ft_substr(s, 0, len_word);
		if (!split[i])
		{
			free_split_memory(split, i);
			return (-1);
		}
		s += len_word;
		total_words--;
		i++;
	}
	return (0);
}

char	**ft_split(char const *s, char c)
{
	char	**split;
	int		total_words;
	int		i;

	if (!s)
		return (NULL);
	total_words = get_total_words((char *)s, c);
	split = (char **)malloc(sizeof(char *) * (total_words + 1));
	if (!split)
		return (NULL);
	i = 0;
	if (fill_split(split, (char *)s, c, total_words) == -1)
		return (NULL);
	return (split);
}

/*
int main()
{
int i;
char **split = ft_split("--1-2--3----4-----5-----42",  '-');
for (i = 0; split[i]; i++)
printf("%s\n", split[i]);
i++;
printf("%s\n", split[i]);
return 0;
}
*/