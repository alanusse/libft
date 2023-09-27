/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aglanuss <aglanuss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 16:08:18 by aglanuss          #+#    #+#             */
/*   Updated: 2023/09/27 17:04:20 by aglanuss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ptr;
	size_t	i;
	int		strlen;

	strlen = ft_strlen(s);
	if (len == 0 || s[0] == '\0' || start > strlen)
		return (ptr);
	i = 0;
	ptr = (char *)ft_calloc((len + 1), sizeof(char));
	if (!ptr)
		return (NULL);
	while (i < len)
	{
		ptr[i] = s[start + i];
		i++;
	}
	return (ptr);
}

// int main()
// {
// 	char *str = "";
// 	char *ret = ft_substr(str, 0, 1);

// 	printf("ret: %s\n", ret);
// 	return 1;
// }