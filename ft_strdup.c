/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aglanuss <aglanuss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 13:57:32 by aglanuss          #+#    #+#             */
/*   Updated: 2023/09/27 14:25:34 by aglanuss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*dup;
	int		len;

	len = ft_strlen(s1);
	dup = (char *)malloc((len + 1) * sizeof(char));
	if (!dup)
	{
		errno = ENOMEM;
		return (NULL);
	}
	dup[len] = '\0';
	ft_strlcpy(dup, s1, len + 1);
	return (dup);
}

// int	main()
// {
// 	char str[] = "hola esto es un string";
// 	char *dup = ft_strdup(str);

// 	printf("%s\n", dup);
// 	free(dup);
// 	return 1;
// }