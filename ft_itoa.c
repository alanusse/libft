/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aglanuss <aglanuss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 13:52:55 by aglanuss          #+#    #+#             */
/*   Updated: 2023/10/17 21:55:06 by aglanuss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
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

char	*ft_itoa(int n)
{
	char	*ptr;
	int		i;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (n == 0)
		return (ft_strdup("0"));
	ptr = (char *)malloc((count_digits(n) + 1) * sizeof(char));
	if (!ptr)
		return (NULL);
	ptr[count_digits(n)] = '\0';
	i = count_digits(n) - 1;
	if (n < 0)
	{
		ptr[0] = '-';
		n *= -1;
	}
	while (n > 0)
	{
		ptr[i] = '0' + (n % 10);
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
//   printf("test8: %s\n", ft_itoa(-2147483648)); // output: 2147483648
//   return 1;
// }