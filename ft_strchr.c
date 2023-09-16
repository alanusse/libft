#include <stdlib.h>
#include "libft.h"

char  *ft_strchr(const char *s, int c)
{
  int i;
  int len;

  i = 0;
  len = ft_strlen(s);
  while (i <= len)
  {
    if (s[i] == (char)c)
      return &s[i];
    i++;
  }
  return (NULL);
}
