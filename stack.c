#include<stdio.h>
#include<stdlib.h>
#define SIZE 5
int s[SIZE],top=-1;
int push();
int pop();
int disp();

int main(){
  int ch;
  for(;;){
    printf("1.Push\n 2.Pop\n 3.Display\n 4.Exit\n");
    printf("Enter your choice: ");
    scanf("%d",&ch);

    switch(ch){
      case 1: push();
      break;
      case 2: pop();
      break;
      case 3: disp();
      break;
      case 4: exit(0);
      default: printf("invalid\n");
    }
  }
}
int push(){
  int i;
  if(top==SIZE-1){
    printf("Stack overflow\n");
  }else{
    printf("Enter the item\n");
    scanf("%d",&i);
    top++;
    s[top]=i;
  }
  return 0;
}
int pop(){
  if(top==-1){
    printf("Stack uncerlow\n");
  }else{
    printf("The poped element is: %d\n",s[top]);
    top--;
  }
  return 0;
}
int disp(){
  if(top ==-1){
    printf("Stack Underflow\n");
  }else{
    printf("The stack elements are:\n");
    for( int i=top;i>=0;i--){
      printf("%d ",s[i]);
    }
  }
}