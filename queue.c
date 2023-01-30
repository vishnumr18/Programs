// implimenting queue using array
#include <stdio.h>
#define MAX 25

void insert();
void delete();
void display();

int q[MAX];
int f = -1, r = -1;

int main()
{
  int ch;

  while (1)
  {
    printf("1.Insert \t 2.Delete \t 3.Display \t 4.Exit\t \n");
    printf("Enter your choice: ");
    scanf("%d", &ch);

    switch (ch)
    {
    case 1:
      insert();
      break;
    case 2:
      delete ();
      break;
    case 3:
      display();
      break;
    case 4:
      exit(1);
      break;
    default:
      printf("Entered choice is invalid\n");
    }
  }
}
void insert()
{
  int e;
  if (r == MAX - 1)
  {
    printf("The Queue Overflow \n");
  }
  else
  {
    if (f == -1)
      f = 0;
    printf("Enter the element: ");
    scanf("%d", &e);
    r = r + 1;
    q[r] = e;
  }
}
void delete()
{
  if (f == -1 || f > r)
  {
    printf("Queue underflow \n");
    return;
  }
  else
  {
    printf("The element deleted is: %d", q[f]);
    f++;
  }
}
void display()
{
  if (f == -1)
  {
    printf("Queue underflow\n");
  }
  else
  {
    printf("The Queue is: \n");
    for (int i = f; i <= r; i++)
    {
      printf("%d ", q[i]);
    }
  }
}
