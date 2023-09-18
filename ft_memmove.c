#include <stdlib.h>
#include "libft.h"
// #include <stdio.h>
// #include <string.h>

void  *ft_memmove(void *dst, const void *src, size_t len)
{
  char    *destination;
  char    *source;
  char    tmp[len];
  size_t  i;
  size_t  j;
  
  if (dst == NULL && src == NULL) return NULL;
  destination = (char *)dst;
  source = (char *)src;
  i = 0;
  j = 0;
  while(j < len)
  {
    tmp[j] = source[j];
    j++;
  }
  while(i < len)
  {
    destination[i] = tmp[i];
    i++;
  }
  return dst;
}

// int main()
// {
//   char  src[] = "Hola mundo!";

//   char dst[] = "Chau mundo!";
//   char ft_dst[] = "Chau mundo!";

//   printf("Before:\n");
//   // printf("src    -> %s\n", src);
//   printf("dst    -> %s\n", dst);
//   printf("ft_dst -> %s\n\n", ft_dst);

//   ft_memmove(((void *)0), ((void *)0), 10);
//   memmove(((void *)0), ((void *)0), 10);

//   printf("After:\n");
//   // printf("src    -> %s\n", src);
//   printf("dst    -> %s\n", dst);
//   printf("ft_dst -> %s\n", ft_dst);
//   return 1;
// }