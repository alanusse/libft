/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agulanus <agulanus@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 18:12:07 by agulanus          #+#    #+#             */
/*   Updated: 2024/11/11 15:55:26 by agulanus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * Decimal-digit character test.
 *
 * The ft_isdigit() function tests for a decimal digit character.
 */
int	ft_isdigit(int c)
{
	return (c >= '0' && c <= '9');
}
