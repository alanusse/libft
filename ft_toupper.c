/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aglanuss <aglanuss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 18:46:34 by aglanuss          #+#    #+#             */
/*   Updated: 2023/09/14 18:57:10 by aglanuss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_toupper(int c)
{
	int	a_lowercase;

	a_lowercase = 'a';
	if (c >= 'a' && c <= 'z')
	{
		return (c - a_lowercase + 'A');
	}
	else
	{
		return (c);
	}
}
