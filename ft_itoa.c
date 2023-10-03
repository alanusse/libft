/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aglanuss <aglanuss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 13:52:55 by aglanuss          #+#    #+#             */
/*   Updated: 2023/10/03 13:58:37 by aglanuss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char  *ft_itoa(int n)
{

}

int main()
{
  printf("test1: %s\n", ft_itoa(255)); // output: 255
  printf("test2: %s\n", ft_itoa(0)); // output: 0
  printf("test3: %s\n", ft_itoa(-0)); // output: 0
  printf("test4: %s\n", ft_itoa(-200)); // output: -200
  printf("test5: %s\n", ft_itoa(2147483647)); // output: 2147483647
  printf("test6: %s\n", ft_itoa(2147483648)); // output: NULL
  printf("test7: %s\n", ft_itoa(-2147483648)); // output: -2147483648
  printf("test8: %s\n", ft_itoa(-2147483649)); // output: NULL
  return 1;
}