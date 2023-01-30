// Linear Search
#include <stdio.h>
int main()
{
  int a[50], i, n, m;
  printf("Enter the number of elements n: ");
  scanf("%d", &n);
  printf("Enter the elements of the array: \n");
  for (i = 0; i < n; i++)
  {
    scanf("%d", &a[i]);
  }
  printf("Enter the element to be found: ");
  scanf("%d", &m);

  for (i = 0; i < n; i++)
  {
    if (a[i] == m)
    {
      printf("The array is found at %d position\n", i + 1);
      break;
    }
  }
  if (i == n)
  {
    printf("The element is NOT FOUND!!!");
  }
  //  ------------OR-------------
  // int flag=0;
  // for(i=0;i<n;i++){
  //   if (a[i] == m ){
  //     flag = 1;
  //     break;
  //   }
  // }

  // if(flag == 1){
  //   printf("The array is found at %d position\n",i+1);
  // }
  // else{
  //   printf("The element is not found in the array");
  // }

  return 0;
}