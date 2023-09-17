// #include <stdlib.h>
// #include <stdio.h>
// #include <string.h>
// #include <ctype.h>
#include "libft.h"

int ft_atoi(const char *str)
{
  int total;
  int sign;
  int i;

  total = 0;
  sign = 1;
  i = 0;
  while(str[i] == '\t' || str[i] == '\n' || str[i] == '\v' || str[i] == '\f' || str[i] == '\r' || str[i] == ' ')
    i++;
  while(str[i] == '+' || str[i] == '-')
  {
    if (str[i] == '-')
      sign = -1;
    i++;
    break;
  }
  while(ft_isdigit(str[i]))
  {
    total = (total * 10) + (str[i] - '0');
    i++;
  }
  return (total * sign);
}

// int main()
// {
//   char *str = "  \n      -54+23  4   ";

//   printf("atoi -> %i\n", atoi(str));
//   printf("ft_atoi -> %i\n", ft_atoi(str));
//   return 1;
// }