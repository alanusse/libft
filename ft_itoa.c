/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aglanuss <aglanuss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 13:52:55 by aglanuss          #+#    #+#             */
/*   Updated: 2023/10/05 20:09:10 by aglanuss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

int	count_digits(int n)
{
	int	count;

	count = 0;
	if (n == 0)
		return (1);
	if (n < 0)
		count = 1;
	while (n > 0 || n < 0)
	{
		n /= 10;
		count++;
	}
	return (count);
}

char	int_to_char(int n)
{
	if (n < 0 || n > 9)
		return (NULL);
	return ('0' + n);
}

char	*ft_itoa(int n)
{
	char	*ptr;
	int		size;
	int		i;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	size = count_digits(n);
	ptr = (char *)malloc((size + 1) * sizeof(char));
	if (!ptr)
		return (NULL);
	ptr[size] = '\0';
	if (n < 0)
	{
		ptr[0] = '-';
		n *= -1;
	}
	i = size - 1;
	while (i >= 0 && ptr[i] != '-')
	{
		ptr[i] = int_to_char(n % 10);
		n /= 10;
		i--;
	}
	return (ptr);
}

// int main()
// {
//   printf("test1: %s\n", ft_itoa(255)); // output: 255
//   printf("test2: %s\n", ft_itoa(0)); // output: 0
//   printf("test3: %s\n", ft_itoa(-0)); // output: 0
//   printf("test4: %s\n", ft_itoa(-200)); // output: -200
//   printf("test5: %s\n", ft_itoa(2147483647)); // output: 2147483647
//   printf("test6: %s\n", ft_itoa(2147483648)); // output: 2147483648
//   printf("test7: %s\n", ft_itoa(-2147483648LL)); // output: -2147483648
//   printf("test8: %s\n", ft_itoa(-2147483649)); // output: 2147483647
//   return 1;
// }