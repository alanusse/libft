/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agulanus <agulanus@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 01:35:11 by agulanus          #+#    #+#             */
/*   Updated: 2024/11/10 16:12:18 by santito          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * Alphabetic character test.
 *
 * The ft_isalpha() function returns zero if the character tests false and
 * returns non-zero if the character tests true.
 */
int	ft_isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
