#include <stdio.h>
#include <stdlib.h>
void insertAtPosition(int pos, int a[], int num);
void deletAtPosition(int pos, int a[], int num);
void display(int a[], int num);

int main()
{
  int i, n, a[25], pos, ch;
  printf("Enter the number of elements:\n");
  scanf("%d", &n);
  printf("Enter the elements of the array:\n");
  for (i = 0; i < n; i++)
  {
    scanf("%d", &a[i]);
  }
  printf("1.Adding an Elenent \t 2.Delete an Element ");
  printf("3.Display the Elenents \t 4.Exit ");
  scanf("%d", &ch);
  switch (ch)
  {
  case 1:
    printf("Enter the position to the element to be inserted: \n");
    scanf("%d", &pos);
    insertAtPosition(pos, a, n);
    break;
  case 2:
    printf("Enter the podition where the element to be deleted \n");
    scanf("%d", &pos);
    deletAtPosition(pos, a, n);
    break;
  case 3:
    display(a, n);
    break;
  default:
    exit(0);
  }
}

void insertAtPosition(int pos, int a[], int num)
{
  int n, elmt, posi;
  printf("Enter the elemet to be added:\n");
  scanf("%d", &elmt);
  posi = pos;
  n = num;
  for (int i = n; i >= pos; i--)
  {
    a[i] = a[i - 1];
  }
  a[pos - 1] = elmt;
  n++;
  return a[n];
}

void deletAtPosition(int pos, int a[], int num)
{
  int n, posi, item;
  posi = pos;
  item = a[posi - 1];
  for (int i = pos - 1; i < n - 1; i++)
  {
    a[i] = a[i + 1];
  }
  n--;
  printf("The deleted element is %d", item);
  return a[n];
}

void display(int a[], int num)
{
  int n;
  printf("The elements of the list are:\n");
  for (int i = 0; i < n; i++)
  {
    printf("%d ", a[i]);
  }
  return a[n];
}