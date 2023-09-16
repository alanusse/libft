#include <stdlib.h>
#include "libft.h"

char  *ft_strrchr(const char *s, int c)
{
  int i;

  i = ft_strlen(s);
  while(i >= 0)
  {
    if (s[i] == (char)c)
      return &s[i];
    i--;
  }
  return (NULL);
}