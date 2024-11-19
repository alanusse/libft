/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agulanus <agulanus@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 17:52:41 by agulanus          #+#    #+#             */
/*   Updated: 2024/11/19 15:42:47 by agulanus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

static int	count_digits(int n);

/**
 * Allocates (with malloc(3)) and returns a string representing the integer
 * received as an argument. Negative numbers must be handled.
 */
char	*ft_itoa(int n)
{
	char	*ret;
	int		digits_count;

	digits_count = count_digits(n);
	if (n == INT_MIN)
		return (ft_strdup("-2147483648"));
	ret = (char *)malloc(sizeof(char) * (digits_count + 1));
	if (!ret)
		return (NULL);
	ret[digits_count] = '\0';
	if (n < 0)
	{
		ret[0] = '-';
		n *= -1;
	}
	while (--digits_count >= 0)
	{
		if (ret[digits_count] != '-')
			ret[digits_count] = '0' + n % 10;
		n /= 10;
	}
	return (ret);
}

static int	count_digits(int n)
{
	int	digits;

	if (n == 0)
		return (1);
	digits = 0;
	if (n < 0)
	{
		n *= -1;
		digits++;
	}
	while (n > 0)
	{
		n /= 10;
		digits++;
	}
	return (digits);
}
