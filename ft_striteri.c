/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aglanuss <aglanuss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 14:55:43 by aglanuss          #+#    #+#             */
/*   Updated: 2023/10/05 20:11:55 by aglanuss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	int				size;
	unsigned int	i;

	size = ft_strlen(s);
	i = 0;
	while (i < size)
	{
		f(i, &s[i]);
		i++;
	}
}

// void to_zero(unsigned int i, char *ptr)
// {
//   printf("%c\n", *ptr);
// }

// int main()
// {
//   char *str = "hola que tal!";
//   ft_striteri(str, to_zero);
//   return 1;
// }