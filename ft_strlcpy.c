/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aglanuss <aglanuss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 12:55:16 by aglanuss          #+#    #+#             */
/*   Updated: 2023/09/20 14:50:39 by aglanuss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "libft.h"

size_t  ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
  size_t i;

  i = 0;
  while(i < dstsize)
  {
    dst[i] = src[i];
    i++;
  }
  dst[i] = '\0';
  return ft_strlen(src) + i;
}

int main()
{
  char  dst[] = "Hola mundo!";
  char  src[] = "Esto es el nuevo string.";

  printf("Before strlcpy:\n");
  printf("dst -> %s\n", dst);
  printf("src -> %s\n", src);
  printf("strlcpy -> %lu\n\n", strlcpy(dst, src, sizeof(dst)));

  printf("After strlcpy:\n");
  printf("dst -> %s\n", dst);
  printf("src -> %s\n", src);
  return 1;
}