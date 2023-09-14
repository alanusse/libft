/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aglanuss <aglanuss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 15:48:32 by aglanuss          #+#    #+#             */
/*   Updated: 2023/09/14 18:09:45 by aglanuss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void	ft_bzero(void *s, size_t n)
{
	char		*pos;
	size_t		i;

	pos = s;
	i = 0;
	while (i < n)
	{
		pos[i] = '\0';
		i++;
	}
}

int	main()
{
	char	str[] = "this is a char array";

	printf("string before > %s\n", str);

	ft_bzero(&str[6], 4 * sizeof(char));

	printf("string after > %s\n", str);
	return 0;
}