// string copy
#include <stdio.h>
#include <string.h>
int main()
{
  int i, len;
  char s1[20];
  char s2[20];
  printf("Enter the first string:\n");
  gets(s1);
  len = strlen(s1);
  for (i = 0; i < len; i++)
  {
    s1[i] = s2[i];
  }
  printf("The copied string is :\n");
  puts(s2);

  return 0;
}