// Sum of all the elements in the linked list

#include <stdio.h>
#include <stdlib.h>

struct node
{
  int info;
  struct node *link;
};

typedef struct node *NODE;
NODE insert(NODE);
void sum(NODE);

int main()
{
  NODE first;
  first = NULL;
  int ch;
  while (1)
  {
    printf("1.Insert the elements\n2.Addition of all the element\n3.Exit\n");
    scanf("%d", &ch);
    switch (ch)
    {
    case 1:
      first = insert(first);
      break;
    case 2:
      sum(first);
      break;
    default:
      exit(0);
    }
  }
}
NODE insert(NODE first)
{
  NODE x, cur;
  int elmt;
  printf("Enter the element: ");
  scanf("%d", &elmt);
  x = (NODE)malloc(sizeof(struct node));
  x->info = elmt;
  x->link = NULL;

  if (first == NULL)
  {
    return x;
  }
  cur = first;
  while (cur->link != NULL)
  {
    cur = cur->link;
  }
  cur->link = x;
  return first;
}

void sum(NODE first)
{
  NODE temp;
  int sum = 0;
  temp = first;
  while (temp != NULL)
  {
    sum = sum + temp->info;
    temp = temp->link;
  }
  printf("The sum of all the elements are:%d\n", sum);
}
