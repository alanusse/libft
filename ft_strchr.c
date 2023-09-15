#include <stdlib.h>

char  *ft_strchr(const char *s, int c)
{
  char  *ptr;

  ptr = (char *)s;
  while(*ptr != '\0')
  {
    if (*ptr == c)
      return (ptr);
    ptr++;
  }
  if (*ptr == '\0' && c == '\0')
    return (ptr);
  else
    return NULL;
}
