// implementing queue with doubly linked list
#include <stdio.h>
#include <stdlib.h>

struct node
{
  int info;
  struct node *llink;
  struct node *rlink;
};

typedef struct node *NODE;

NODE insert_front(NODE);
NODE delete_rear(NODE);
void display(NODE);

int main()
{
  NODE first;
  first = NULL;
  int ch;
  while (1)
  {
    printf("Enter your choice\n");
    printf("1.Insert Front \t 2.Delete Rear\n");
    printf("3.Display \t 4.Exit\n");
    scanf("%d", &ch);
    switch (ch)
    {
    case 1:
      first = insert_front(first);
      break;
    case 2:
      first = delete_rear(first);
      break;
    case 3:
      display(first);
      break;
    default:
      exit(0);
    }
  }
}

NODE insert_front(NODE first)
{
  NODE temp;
  int itm;
  temp = (NODE)malloc(sizeof(struct node));
  printf("Enter the elements: ");
  scanf("%d", &itm);
  temp->info = itm;
  temp->llink = NULL;
  temp->rlink = NULL;
  if (first == NULL)
  {
    return temp;
  }
  first->llink = temp;
  temp->rlink = first;
  return temp;
}

// function for deleting the elements in the list
NODE delete_rear(NODE first)
{
  NODE cur, prev;
  if (first == NULL)
  {
    printf("The list is Empty\n");
    return first;
  }
  if (first->rlink == NULL)
  {
    printf("The deleted element is %d\n", first->info);
    return NULL;
  }
  cur = first;
  prev = NULL;
  while (cur->rlink != NULL) // condition for tracersing the elements in the list
  {
    prev = cur;
    cur = cur->rlink;
  }
  printf("The deleted element is %d\n", cur->info);
  prev->rlink = NULL;
  free(cur);
  return first;
}

// function for displaying the elements in the list
void display(NODE first)
{
  NODE cur;
  if (first == NULL)
  {
    printf("The list is empty!!!!\n");
    return first;
  }
  cur = first;
  printf("The elements in the list are:\n");
  while (cur != NULL)
  {
    printf("%d ", cur->info);
    cur = cur->rlink;
  }
  printf("\n");
}