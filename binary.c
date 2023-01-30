// Binary Search
#include <stdio.h>
int main()
{
  int mid, high, low, n, i, key, a[100], loc;
  printf("Enter the size of the array:\n");
  scanf("%d", &n);
  printf("Enter the elements of the array in assendning order: \n");
  for (i = 0; i < n; i++)
  {
    scanf("%d", &a[i]);
  }
  printf("Enter the key to be searched:\n");
  scanf("%d", &key);
  low = 0;
  high = n - 1;
  while (low <= high)
  {
    mid = (low + high) / 2;
    if (key == a[mid])
    {
      loc = mid; // coping the value of the mid element to location variable
      break;
    }
    else if (key > a[mid])
    {
      low = mid + 1;
    }
    else
    {
      high = mid - 1;
    }
    loc = -1; // -1 represets the false consition//
  }
  if (loc == mid)
  {
    printf("The key %d is found at %d position ", key, mid + 1);
  }
  else
  {
    printf("The KEY is not found !!!!");
  }
  return 0;
}