#include <stdlib.h>
#include "libft.h"

char  *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
  size_t  i;
  size_t  j;

  i = 0;
  j = 0;
  if (ft_strlen(needle) == 0)
    return (char *)haystack;

  while(i < len && haystack[i] != '\0')
  {
    if (haystack[i] == *needle)
    {
      while((i + j) < len && haystack[i + j] == needle[j])
      {
        if (needle[j + 1] == '\0')
          return (char *)&haystack[i];
        j++;
      }
      j = 0;
    }
    i++;
  }
  return (NULL);
}