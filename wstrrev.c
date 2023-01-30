// string reverse
#include <stdio.h>
#include <string.h>
int main()
{
  int i, l;
  char ch, s[30];
  printf("Enter the String:\n");
  gets(s);
  l = strlen(s);
  for (i = 0; i < l / 2; i++)
  {
    ch = s[i];
    s[i] = s[l - 1 - i];
    s[l - 1 - i] = ch;
  }
  printf("The reversed array is :%s", s);
  return 0;
}