#include "libft.h"

int ft_atoi(const char *str)
{
  int total;
  int sign;

  total = 0;
  sign = 1;
  while(*str == '\t' || *str == '\n' || *str == '\v' || *str == '\f' || *str == '\r' || *str == ' ')
    str++;
  while(*str == '+' || *str == '-')
  {
    if (*str == '-')
      sign = -1;
    str++;
    break;
  }
  while(ft_isdigit(*str))
  {
    total = (total * 10) + (*str - '0');
    str++;
  }
  return (total * sign);
}