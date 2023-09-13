/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aglanuss <aglanuss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 13:38:49 by aglanuss          #+#    #+#             */
/*   Updated: 2023/09/13 14:32:00 by aglanuss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void *ft_memset(void *b, int c, size_t len)
{
  size_t bytes_writed;
  char *pos;

  bytes_writed = 0;
  pos = (char *) b;
  while(bytes_writed < len)
  {
    *pos = c;
    b++;
    bytes_writed += sizeof(c);
  }
  return b;
}

int main()
{
    char str[50] = "GeeksForGeeks is for programming geeks.";
    printf("\nBefore memset(): %s\n", str);
  
    // Fill 8 characters starting from str[13] with '.'
    ft_memset(str + 13, '.', 8*sizeof(char));
  
    printf("After memset():  %s", str);
    return 0;
}