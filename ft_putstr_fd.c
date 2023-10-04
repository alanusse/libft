/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aglanuss <aglanuss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 15:31:20 by aglanuss          #+#    #+#             */
/*   Updated: 2023/10/04 15:35:04 by aglanuss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putstr_fd(char *s, int fd)
{
  int i;

  i = 0;
  while(s[i] != '\0')
  {
    write(fd, &s[i], 1);
    i++;
  }
}

// int main()
// {
//   ft_putstr_fd("hola que tal...", 1);
//   return 1;
// }