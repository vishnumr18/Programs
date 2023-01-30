// string concatination
#include <stdio.h>
#include <string.h>
int main()
{
  int l1, l2, i;
  char str1[40];
  char str2[30];
  printf("Enter the first string: \n");
  gets(str1);
  printf("Enter the second string: \n");
  gets(str2);
  l1 = strlen(str1);
  l2 = strlen(str2);
  for (i = 0; i <= l2; i++)
  {
    str1[l1 + i] = str2[i];
  }
  printf("The concatinaten string is: \n");
  printf("%s", str1);

  return 0;
}