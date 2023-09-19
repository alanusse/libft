#include <stdlib.h>

void  *ft_memchr(const void *s, int c, size_t n)
{
  unsigned char ch;
  unsigned char *str;
  size_t        i;

  ch = (unsigned char)c;
  str = (unsigned char *)s;
  i = 0;
  while(i < n)
  {
    if (str[i] == ch)
      return &str[i];
    i++;
  }
  return (NULL);
}