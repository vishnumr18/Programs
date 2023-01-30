// code for implementing stacks using singly linked list

#include <stdio.h>
#include <stdlib.h>
struct node
{
  int info; // a node is create having two fields 1.info-> store the information  & 2.link-> stores the address of next node
  struct node *link;
};

typedef struct node *NODE;
NODE insert_rear(NODE);
NODE delete_rear(NODE);
void display(NODE);

void main()
{
  int ch;
  NODE first;
  first = NULL;
  while (1)
  {
    printf("1.Insert Rear \t 2.Delete Rear \n");
    printf("3.Display \t 4.EXIT \n");
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

// inserting in the rear
NODE insert_rear(NODE first)
{
  NODE x, cur;
  int itm;
  x = (NODE)malloc(sizeof(struct node)); // creat a node using dynamic allocation
  printf("Enter the item: ");
  scanf("%d", &itm);
  x->info = itm;  // the item is placed in the info field of the node
  x->link = NULL; // the the address of the next node is kept in the link field
  if (first == NULL)
  {
    return x; // if there are no elements in the link the node x becomes the first node
  }
  cur = first;
  while (cur->link != NULL)
  {
    cur = cur->link; // if there are more than one element then, we travrce the link and add the new node at the end
  }
  cur->link = x;
  return first;
}

// deleting from rear
NODE delete_rear(NODE first)
{
  NODE cur, prev;
  if (first == NULL)
  {
    printf("The list is empty!!!"); // if there are no elemenet in the list
  }
  if (first->link == NULL)
  {
    printf("The element deleted is %d ", first->info); // when there is only one element in the list
    free(first);
    return NULL;
  }
  cur = first;
  prev = NULL; // if there are more than one element
  while (cur->link != NULL)
  {
    prev = cur; // used to treverse the linked list using "cur" and keeping track of the previous node using "prev"
    cur = cur->link;
  }
  printf("Element deleted is %d ", cur->info);
  free(cur);
  prev->link = NULL;
  return first;
}

// display the elements
void display(NODE first)
{
  NODE temp;
  if (first == NULL)
  {
    printf("The list is empty!!!"); // if there are no element
    return;
  }
  printf("The content of the list are: ");
  temp = first;
  while (temp != NULL)
  {
    printf("%d ", temp->info); // for traversing and printing the elements
    temp = temp->link;         // to get the link of next element
  }
  printf("\n");
}