/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agustinlanusse <agustinlanusse@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 18:11:16 by aglanuss          #+#    #+#             */
/*   Updated: 2023/09/18 14:51:29 by agustinlanu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;
	char	*source;
	char	*destination;

	if (dst == NULL && src == NULL) return NULL;
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