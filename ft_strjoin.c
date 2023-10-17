/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aglanuss <aglanuss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 16:21:12 by aglanuss          #+#    #+#             */
/*   Updated: 2023/10/17 21:57:31 by aglanuss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char		*ptr;
	size_t		i;
	size_t		j;
	size_t		strlen;

	strlen = ft_strlen(s1) + ft_strlen(s2);
	ptr = (char *)malloc((strlen + 1) * sizeof(char));
	if (!ptr)
		return (NULL);
	i = 0;
	while (s1[i] != '\0')
	{
		ptr[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j] != '\0')
	{
		ptr[i + j] = s2[j];
		j++;
	}
	ptr[i + j] = '\0';
	return (ptr);
}

// int main()
// {
//   printf("test1: %s\n", ft_strjoin("hola ", "como estas?"));
//   printf("test2: %s\n", ft_strjoin("", "como estas?     ?"));
//   printf("test3: %s\n", ft_strjoin("hola", "")); // output: hola
//   printf("test4: %s\n", ft_strjoin("", "")); // output: ""
//   return 1;
// }