/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aglanuss <aglanuss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 16:53:47 by aglanuss          #+#    #+#             */
/*   Updated: 2023/10/17 21:56:25 by aglanuss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	c;

	if (n == -2147483648)
	{
		write(fd, "-2147483648", 11);
		return ;
	}
	if (n < 0)
	{
		write(fd, "-", 1);
		n *= -1;
	}
	if (n > 9)
	{
		ft_putnbr_fd(n / 10, fd);
		ft_putnbr_fd(n % 10, fd);
	}
	else
	{
		c = '0' + n;
		write(fd, &c, 1);
	}
}

// int main()
// {
// 	ft_putnbr_fd(0, 1);						// output: 0

// 	ft_putnbr_fd(-100, 1);				// output: -100

// 	ft_putnbr_fd(100, 1);					// output: 100

// 	ft_putnbr_fd(2147483648, 1);	// output: 2147483648

// 	ft_putnbr_fd(-2147483648, 1); // output: -2147483648
// 	return 1;
// }