/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agulanus <agulanus@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 16:09:18 by agulanus          #+#    #+#             */
/*   Updated: 2025/02/11 12:40:16 by agulanus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_words(char const *s, char c);
static char		*get_next_word(char **s, char c);
static void		free_split(char **split, size_t size);

/**
 * Allocates (with malloc(3)) and returns an array of strings obtained by
 * splitting ’s’ using the character ’c’ as a delimiter.
 * The array must end with a NULL pointer.
 */
char	**ft_split(char const *s, char c)
{
	char	**ret;
	char	*str;
	size_t	words;
	size_t	i;

	words = count_words(s, c);
	ret = (char **)malloc(sizeof(char *) * (words + 1));
	if (!ret)
		return (NULL);
	i = -1;
	while (++i <= words)
		ret[i] = NULL;
	str = (char *)s;
	i = -1;
	while (++i < words)
	{
		ret[i] = get_next_word(&str, c);
		if (!ret[i])
		{
			free_split(ret, words + 1);
			return (NULL);
		}
	}
	return (ret);
}

static size_t	count_words(char const *s, char c)
{
	size_t	words;
	bool	flag;

	words = 0;
	flag = true;
	while (*s != '\0')
	{
		if (*s == c && !flag)
			flag = true;
		if (*s != c && flag)
		{
			words++;
			flag = false;
		}
		s++;
	}
	return (words);
}

static char	*get_next_word(char **s, char c)
{
	char	*word;
	size_t	word_len;

	while (**s != '\0' && **s == c)
		(*s)++;
	word_len = 0;
	while ((*s)[word_len] != '\0' && (*s)[word_len] != c)
		word_len++;
	word = (char *)malloc(sizeof(char) * (word_len + 1));
	if (!word)
		return (NULL);
	ft_strlcpy(word, *s, word_len + 1);
	*s += word_len;
	return (word);
}

static void	free_split(char **split, size_t size)
{
	while (size-- > 0)
	{
		free(split[size]);
		split[size] = NULL;
	}
	free(split);
	split = NULL;
}
