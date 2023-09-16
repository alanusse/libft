char  *ft_strrchr(const char *s, int c)
{
  char  *ptr;
  char  *chr;

  ptr = (char *)s;
  while(*ptr != '\0')
  {
    if (*ptr == c)
      chr = ptr;
    ptr++;
  }

  if (*ptr == '\0' && c == '\0')
    return (ptr);
  else
    return (chr);
}