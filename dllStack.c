// implementing stacks using doubly linked list
#include <stdio.h>
#include <stdlib.h>

struct node // creating a node with three fields
{
  int info;
  struct node *llink;
  struct node *rlink;
};

typedef struct node *NODE;

NODE insert_rear(NODE);
NODE delete_rear(NODE);
void display(NODE);

int main()
{
  NODE first;
  int ch;
  first = NULL;
  while (1)
  {
    printf("Enter the Your Choise: \n");
    printf("1.Insert Rear \t 2.Delete Rear \n");
    printf("3.Display \t 3.Exit\n");
    scanf("%d", &ch);
    switch (ch)
    {
    case 1:
      first = insert_rear(first);
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

NODE insert_rear(NODE first) // function for inserting the elements in the list
{
  NODE temp, cur;
  int itm;
  printf("Enter the Element to be indserted: ");
  scanf("%d", &itm);
  temp = (NODE)malloc(sizeof(struct node)); // for dynamically allocating the memory
  temp->info = itm;
  temp->llink = NULL;
  temp->rlink = NULL;

  if (first == NULL) // condition to check if there are any elements in the list
  {
    return temp;
  }

  cur = first;
  while (cur->rlink != NULL) // condition when there are more than one element in the list
  {
    cur = cur->rlink;
  }
  cur->rlink = temp;
  temp->llink = cur;
  return first;
}

NODE delete_rear(NODE first) // function for deleting the elements in the list
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

void display(NODE first) // function for displaying the elements in the list
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