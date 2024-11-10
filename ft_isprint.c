/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agulanus <agulanus@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 18:35:23 by agulanus          #+#    #+#             */
/*   Updated: 2024/11/10 16:13:11 by santito          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * Printing character test (space character inclusive).
 *
 * The ft_isprint() function tests for any printing character,
 * including space (‘ ’).  The value of the argument must be representable
 * as an unsigned char or the value of EOF.
 */
int	ft_isprint(int c)
{
	return (c >= ' ' && c <= '~')
}
