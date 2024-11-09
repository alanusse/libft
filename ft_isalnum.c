/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agulanus <agulanus@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 18:23:48 by agulanus          #+#    #+#             */
/*   Updated: 2024/11/09 23:09:57 by agulanus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Alphanumeric character test.
 * 
 * The ft_isalnum() function tests for any character for which ft_isalpha or
 * ft_isdigit is true.  The value of the argument must be representable as
 * an unsigned char or the value of EOF.
 * 
 * The ft_isalnum() function returns zero if the character tests false and
 * returns non-zero if the character tests true.
 */
int	ft_isalnum(int c)
{
	if (ft_isalpha(c) || ft_isdigit(c))
		return (1);
	return (0);
}
