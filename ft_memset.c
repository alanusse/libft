/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agustinlanusse <agustinlanusse@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 13:38:49 by aglanuss          #+#    #+#             */
/*   Updated: 2023/09/18 13:56:33 by agustinlanu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memset(void *b, int c, size_t len)
{
	char	*pos;

	pos = b;
	while (len > 0)
	{
		*pos = c;
		len--;
		pos++;
	}
	return (b);
}
