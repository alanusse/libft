/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aglanuss <aglanuss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 18:11:16 by aglanuss          #+#    #+#             */
/*   Updated: 2023/10/17 21:37:29 by aglanuss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;
	char	*source;
	char	*destination;

	if (dst == NULL && src == NULL)
		return (NULL);
	i = 0;
	source = (char *)src;
	destination = (char *)dst;
	while (i < n)
	{
		destination[i] = source[i];
		i++;
	}
	return (dst);
}
