/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agulanus <agulanus@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 18:31:33 by agulanus          #+#    #+#             */
/*   Updated: 2024/11/11 15:55:12 by agulanus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * Test for ASCII character.
 *
 * The ft_isascii() function tests for an ASCII character, which is any
 * character between 0 and decimal 127 inclusive.
 */
int	ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}
