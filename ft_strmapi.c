/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aglanuss <aglanuss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 14:20:09 by aglanuss          #+#    #+#             */
/*   Updated: 2023/10/17 21:54:17 by aglanuss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*ptr;
	size_t	size;
	size_t	i;

	size = ft_strlen(s);
	ptr = (char *)malloc((size + 1) * sizeof(char));
	if (!ptr)
		return (NULL);
	i = 0;
	while (i < size)
	{
		ptr[i] = f(i, s[i]);
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}

// char  to_upper(unsigned int i, char c)
// {
//   if (c >= 'a' && c <= 'z')
//     return ('A' + (c - 'a'));
//   else
//     return (c);
// }

// int main()
// {
//   char  *str = "hola que tal";
//   char  *res = ft_strmapi(str, to_upper);
//   printf("%s", res);
//   return 1;
// }