/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agulanus <agulanus@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 01:34:06 by agulanus          #+#    #+#             */
/*   Updated: 2024/11/12 01:37:14 by agulanus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * Upper case to lower case letter conversion.
 *
 * The ft_tolower() function converts an upper-case letter to the corresponding
 * lower-case letter. The argument must be representable as an unsigned char
 * or the value of EOF.
 *
 * If the argument is an upper-case letter, the ft_tolower() function returns
 * the corresponding lower-case letter if there is one; otherwise, the argument
 * is returned unchanged.
 */
int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		c += 32;
	return (c);
}
