// function for insertion and deletion of a node at desired posoition

#include <stdio.h>
#include <stdlib.h>

struct node
{
  int info;
  struct node *link;
};

typedef struct node *NODE;

NODE createNode(NODE);
NODE insertAtPosition(NODE, int pos);
NODE deleteAtPosition(NODE, int pos);
void display(NODE);
int main()
{
  NODE first;
  first = NULL;
  int ch, loc;
  while (1)
  {
    printf("1.Crate a node\t2.Insert at position\n3.Delete at positon\t 4.Display\n");
    printf("5.Exit\nEnter your choice: ");
    scanf("%d", &ch);

    switch (ch)
    {
    case 1:
      first = createNode(first);
      break;
    case 2:
      printf("Enter the position where the element should be added\n");
      scanf("%d", &loc);
      first = insertAtPosition(first, loc);
      break;
    case 3:
      printf("Enter the position where the element should be deleted\n");
      scanf("%d", &loc);
      first = deleteAtPosition(first, loc);
      break;
    case 4:
      display(first);
      break;
    default:
      exit(0);
    }
  }
}

//  creating a list
NODE createNode(NODE first)
{
  NODE x, cur;
  int itm;
  x = (NODE)malloc(sizeof(struct node));
  printf("Enter the elements: ");
  scanf("%d", &itm);
  x->info = itm;
  x->link = NULL;
  if (first == NULL)
  {
    return x;
  }
  cur = first;
  while (cur->link != NULL)
    cur = cur->link;
  cur->link = x;
  return first;
}

NODE insertAtPosition(NODE first, int pos)
{
  int count = 0, ele;
  NODE temp, cur, prev;

  if (pos > count)
  {
    createNode(first);
    return;
  }

  temp = (NODE)malloc(sizeof(struct node));
  printf("Enter the new element: ");
  scanf("%d", &ele);
  temp->info = ele;
  temp->link = NULL;

  cur = first;
  if (pos == 1)
  {
    temp->link = first;
    return temp;
  }

  while (cur->link == NULL || count < pos - 1)
  {

    prev = cur;
    cur = cur->link;
    count++;
  }
  temp->link = prev->link;
  prev->link = temp;
  return first;
}

NODE deleteAtPosition(NODE first, int pos)
{
  NODE cur, prev;
  int n;
  cur = first;
  while (cur->link != NULL || n < pos - 1)
  {
    prev = cur;
    cur = cur->link;
    n++;
  }
  prev->link = cur->link;
  printf("The element deleted is %d\n", cur->info);
  free(cur);
  return first;
}

void display(NODE first)
{
  NODE cur;
  if (first == NULL)
  {
    printf("list is empty");
    return;
  }
  printf("The element of the list are:\n");
  cur = first;
  while (cur != NULL)
  {
    printf("%d ", cur->info);
    cur = cur->link;
  }
  return;
}