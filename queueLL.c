// Implimentation of queue using Singly linked list
#include <stdio.h>
#include <stdlib.h>

struct node
{
  int info;
  struct node *link;
};

typedef struct node *NODE;
NODE insert_rear(NODE);
NODE delete_front(NODE);
void display(NODE);

void main()
{
  NODE first;
  int ch;
  first = NULL;
  while (1)
  {
    printf("1.Insert Rear \t 2.Delete Front\n");
    printf("3.Display \t 4.Exit \n");
    scanf("%d", &ch);
    switch (ch)
    {
    case 1:
      first = insert_rear(first);
      break;
    case 2:
      first = delete_front(first);
      break;
    case 3:
      display(first);
      break;
    default:
      exit(0);
    }
  }
}

// Function for inserting the elements at rear end
NODE insert_rear(NODE first)
{
  NODE cur, x;
  int itm;
  x = (NODE)malloc(sizeof(struct node));
  printf("Enter the item: ");
  scanf("%d", &itm);
  x->info = itm;
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

// Function for deleting the elements at front
NODE delete_front(NODE first)
{
  NODE temp;
  if (first == NULL)
  {
    printf("The list is Underflow\n");
  }
  temp = first;
  temp = temp->link;
  printf("Element deleted is:%d \n", first->info);
  free(first);
  return temp;
}

// Display the elements of the list
void display(NODE first)
{
  NODE temp;
  if (first == NULL)
  {
    printf("The list is empty\n");
    return;
  }
  printf("The content of the list are ");
  temp = first;
  while (temp != NULL)
  {
    printf("%d ", temp->info);
    temp = temp->link;
  }
  printf("\n");
}