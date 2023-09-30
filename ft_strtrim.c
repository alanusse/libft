/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aglanuss <aglanuss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 17:14:09 by aglanuss          #+#    #+#             */
/*   Updated: 2023/09/29 14:10:04 by aglanuss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

char *ft_strtrim(char const *s1, char const *set)
{
  size_t  i;
  size_t  j;
  size_t  count;
  size_t  s1_len;
  char    *ptr;

  i = 0;
  count = 0;
  s1_len = ft_strlen(s1);
  while (i < s1_len)
  {
    if (!ft_strchr(set, s1[i]))
      count++;
    i++;
  }
  ptr = (char *)malloc((count + 1) * sizeof(char));
  if (!ptr)
    return (NULL);
  i = 0;
  j = 0;
  while (i < s1_len)
  {
    if (!ft_strchr(set, s1[i]))
    {
      ptr[j] = s1[i];
      j++;
    }
    i++;
  }
  ptr[j] = '\0';
  return (ptr);
}

int main()
{
  printf("test1: %s\n", ft_strtrim("hola como estas", "o")); // output: hla cm estas
  printf("test2: %s\n", ft_strtrim("hola como estas", "mo")); // output: hola co estas
  printf("test3: %s\n", ft_strtrim("hola como estas", "")); // output: hola como estas
  printf("test4: %s\n", ft_strtrim("hola", "hola")); // output: ""
  printf("test5: %s\n", ft_strtrim("", "hola")); // output: ""
  printf("test6: %s\n", ft_strtrim("hola como estas", " ")); // output: holacomoestas
  printf("test7: %s\n", ft_strtrim("", "")); // output: ""
  printf("test8: %s\n", ft_strtrim("hola como estas", " c")); // output: holaomo estas
  return 1;
}