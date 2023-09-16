#include <stdlib.h>
#include <string.h>
#include <stdio.h>

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
  size_t  i;

  i = 0;
  while((s1[i] != '\0' || s2[i] != '\0') && i < n)
  {
    if (s1[i] != s2[i])
      return s1[i] - s2[i];
    i++;
  }
  return 0;
}

int main()
{
  char str1[] = "that is b";
  char str2[] = "that is a";

  printf("strcpm -> %i\n", strncmp(str1, str2, 12));
  printf("ft     -> %i\n", ft_strncmp(str1, str2, 12));
  return 1;
}