// Inserting the elements and Deleting the elements in an array using switch case
#include <stdio.h>
int main()
{
  int i, n, a[50], arr, elmt, pos, item;
  printf("Enter the number of array:\n");
  scanf("%d", &n);
  printf("Enter the elements of the array:\n");
  for (i = 0; i < n; i++)
  {
    scanf("%d", &a[i]);
  }
  printf("1.Adding an element \t 2.Deleting an element\n");
  scanf("%d", &arr);
  switch (arr)
  {
  case 1:
    printf("Enter the element to be added in the array:\n");
    scanf("%d", &elmt);
    printf("Enter the position at which the array is to be added\n");
    scanf("%d", &pos);
    for (i = n; i >= pos; i--)
    { // condition for inserting the element to the array
      a[i] = a[i - 1];
    }
    a[pos - 1] = elmt;
    n++;
    printf("The updated array after addition is:\n");
    for (i = 0; i < n; i++)
    {
      printf("%d ", a[i]);
    }
    break;
  case 2:
    printf("Enter the position at which the array has to be deleted:\n");
    scanf("%d", &pos);
    item = a[pos - 1];
    for (i = pos - 1; i < n - 1; i++)
    { // condition for deleting the element from the element
      a[i] = a[i + 1];
    }
    n--;
    printf("The deleted element is %d\n", item);
    printf("The array after the deletion is:\n");
    for (i = 0; i < n; i++)
    {
      printf("%d ", a[i]);
    }
    break;
  default:
    printf("The entered choice is wrong!!!");
  }
}