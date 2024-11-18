/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agulanus <agulanus@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 01:26:30 by agulanus          #+#    #+#             */
/*   Updated: 2024/11/12 01:39:00 by agulanus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * Lower case to upper case letter conversion.
 *
 * The ft_toupper() function converts a lower-case letter to the corresponding
 * upper-case letter. The argument must be representable as an unsigned char
 * or the value of EOF.
 *
 * If the argument is a lower-case letter, the ft_toupper() function returns
 * the corresponding upper-case letter if there is one; otherwise, the argument
 * is returned unchanged.
 */
int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		c -= 32;
	return (c);
}
