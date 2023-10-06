/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aglanuss <aglanuss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 22:54:53 by aglanuss          #+#    #+#             */
/*   Updated: 2023/10/06 16:02:14 by aglanuss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

static int  count_strings(char *str, char c)
{
  int count;
  int i;

  count = 1;
  i = 0;
  while (str[i] != '\0')
  {
    if (c == str[i])
      count++;
    i++;
  }
  return (count);
}

char **ft_split(char const *s, char c)
{
}

void ft_putstr(unsigned int i, char *str)
{
  printf("%s", str);
}

int main()
{
  printf("test1 -> %i\n", count_strings("hola que tal", ' ')); // output: 3
  printf("test2 -> %i\n", count_strings("", ' ')); // output: 1
  printf("test3 -> %i\n", count_strings(" ", ' ')); // output: 1
  printf("test4 -> %i\n", count_strings("abcd", ' ')); // output: 1
  printf("test5 -> %i\n", count_strings("abcd", 'a')); // output: 1



  // output: hola
  // ft_striteri(ft_split("hola", " "), ft_putstr);

  // // output: ""
  // ft_striteri(ft_split("", ""), ft_putstr);

  // // output: ""
  // ft_striteri(ft_split("", " "), ft_putstr);
  
  // output:
  // hola
  // que
  // tal
  // ft_striteri(ft_split("hola que tal", " "), ft_putstr);

  // // output:
  // // bc
  // // bc
  // // bc
  // ft_striteri(ft_split("abcabcabc", "a"), ft_putstr);

  // // output:
  // // ""
  // // abc
  // // ""
  // ft_striteri(ft_split("  abc  ", " "), ft_putstr);

  // // output:
  // // a
  // // b
  // // c
  // // d
  // ft_striteri(ft_split("abcd", ""), ft_putstr);
  return 1;
}