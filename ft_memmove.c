#include <stdlib.h>
#include "libft.h"

void  *ft_memmove(void *dst, const void *src, size_t len)
{
  char  *d;
  char  *s;
  int   i;

  if (dst == NULL && src == NULL) return NULL;
  d = (char *)dst;
  s = (char *)src;
  i = 0;
  if (d > s)
    while(len-- > 0)
      d[len] = s[len];
  else
    while(i < len)
    {
      d[i] = s[i];
      i++;
    }
  return dst;
}