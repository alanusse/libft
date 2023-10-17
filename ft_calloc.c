/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aglanuss <aglanuss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 13:01:51 by aglanuss          #+#    #+#             */
/*   Updated: 2023/10/17 21:37:39 by aglanuss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;

	ptr = malloc(count * size);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, count * size);
	return (ptr);
}

// int	main()
// {
// 	char *ptr;
// 	ptr = ft_calloc(5, sizeof(char));

// 	ptr[0] = 'H';
// 	ptr[1] = 'o';
// 	ptr[2] = 'l';
// 	ptr[3] = 'a';

// 	printf("%s", ptr);
// 	return 1;
// }