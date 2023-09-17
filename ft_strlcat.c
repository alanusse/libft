// #include <stdlib.h>
// #include <string.h>
// #include <stdio.h>
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t c;
	size_t d;

  c = ft_strlen(dst);
	d = 0;
	if (dstsize <= ft_strlen(dst))
		return (dstsize + ft_strlen(src));
	while (src[d] != '\0' && c + 1 < dstsize)
	{
		dst[c] = src[d];
		c++;
		d++;
	}
	dst[c] = '\0';
	return (ft_strlen(dst) + ft_strlen(&src[d]));
}

// int main()
// {
//   char src[] = "lorem";

//   char dst[3] = "a";
//   char ft_dst[3] = "a";

//   int size = 3;

//   printf("strlcat > size: %lu | %s\n", strlcat(dst, src, size), dst);

//   printf("ft      > size: %lu | %s\n", ft_strlcat(ft_dst, src, size), ft_dst);
//   return 1;
// }