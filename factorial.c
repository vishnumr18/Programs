// Factorial using recursion
#include <stdio.h>
int fact(int n)
{
  if (n == 0)
  {
    // printf("0");
    return 0;
  }
  else
  {
    return (n * fact(n - 1));
  }
}
int main()
{
  int n;
  printf("Enter any number: ");
  scanf("%d", &n);
  printf("The factorial of %d is: %d", n, fact(n));
}