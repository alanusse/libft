/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aglanuss <aglanuss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 22:54:53 by aglanuss          #+#    #+#             */
/*   Updated: 2023/10/11 20:14:47 by aglanuss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

static int	count_words(char const *str, char c)
{
	int	count;
	int	ch;

	count = 0;
	ch = 0;
	while (*str)
	{
		if (*str != c && ch == 0)
		{
			count++;
			ch = 1;
		}
		else if (*str == c)
			ch = 0;
		str++;
	}
	return (count);
}



char	**ft_split(char const *s, char c)
{
	char	*ptr;
	int		i;

	if (s[0] == '\0')
		return (ft_strdup(""));

	ptr = (char*)malloc((count_words(s, c) + 1) * sizeof(char*));
	if (!ptr)
		return (NULL);
	i = 0;
	while (ptr[i])
	{

		i++;
	}
}

void	ft_putstr(unsigned int i, char *str)
{
	printf("%s", str);
}

int main(void)
{
	// output: hola
	ft_striteri(ft_split("hola", ' '), ft_putstr);

	// output: ""
	ft_striteri(ft_split("", ' '), ft_putstr);

	// output:
	// hola
	// que
	// tal
	ft_striteri(ft_split("hola que tal", ' '), ft_putstr);

	// output:
	// bc
	// bc
	// bc
	ft_striteri(ft_split("abcabcabc", 'a'), ft_putstr);

	// output:
	// abc
	ft_striteri(ft_split("  abc  ", ' '), ft_putstr);

	return 1;
}