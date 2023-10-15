/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aglanuss <aglanuss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 13:38:49 by aglanuss          #+#    #+#             */
/*   Updated: 2023/10/15 17:40:29 by aglanuss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

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
