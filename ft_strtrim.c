/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aglanuss <aglanuss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 17:14:09 by aglanuss          #+#    #+#             */
/*   Updated: 2023/10/03 13:43:31 by aglanuss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
#include <stdlib.h>
#include "libft.h"

static int is_char_in_set(int c, char const *set)
{
  size_t  i;

  i = 0;
  while (set[i])
  {
    if (c == set[i])
      return (1);
    i++;
  }
  return (0);
}

char *ft_strtrim(char const *s1, char const *set)
{
  char    *ptr;
  size_t  start;
  size_t  end;
  size_t  i;

  start = 0;
  while (s1[start] && is_char_in_set(s1[start], set))
    start++;
  end = ft_strlen(s1);
  while (end > start && is_char_in_set(s1[end - 1], set))
    end--;
  ptr = (char *)malloc(((end - start) + 1) * sizeof(char));
  if (!ptr)
    return (NULL);
  i = 0;
  while (i < (end - start))
  {
    ptr[i] = s1[start + i];
    i++;
  }
  ptr[i] = '\0';
  return (ptr);
}

// int main()
// {
//   printf("test1: %s\n", ft_strtrim("hola como estas", "o")); // output: hola como estas
//   printf("test2: %s\n", ft_strtrim("hola como estas", "ho")); // output: la como estas
//   printf("test3: %s\n", ft_strtrim("       *+ hola +*     ", " *")); // output: + hola +
//   printf("test4: %s\n", ft_strtrim("- abcd -", "")); // output: - abcd -
//   printf("test5: %s\n", ft_strtrim("abcd", "abcd")); // output: ""
//   printf("test6: %s\n", ft_strtrim("", "")); // output: ""
//   printf("test7: %s\n", ft_strtrim("", "a")); // output: ""
//   printf("test8: %s\n", ft_strtrim("aoa", "ao")); // output: ""
//   printf("test9: %s\n", ft_strtrim(" - - test - - ", "- ")); // output: test
//   return 1;
// }