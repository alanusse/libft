/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agulanus <agulanus@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 22:51:25 by agulanus          #+#    #+#             */
/*   Updated: 2024/11/09 23:08:04 by agulanus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Write zeroes to a byte string.
 * 
 * The ft_bzero() function writes n zeroed bytes to the string s.
 * If n is zero, ft_bzero() does nothing.
 */
void	ft_bzero(void *s, size_t n)
{
	size_t	i;

	if (n == 0)
		return ;
	i = -1;
	while (++i < n)
		((unsigned char *)s)[i] = '\0';
}
