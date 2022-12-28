#include<stdio.h>

#define max 5
int q[max];
int f=-1,r=-1;

int insert(int a){
  if(f==-1 && r==-1){
    f=r=0;
    q[r]=a;
  }
  else if ((r+1)%max == f){
    printf("Queue overflow\n");
  }
  else{
    r= (r+1)% max;
    q[r]=a;
  }
}
int delete(){
  if(f==-1 && r==-1)
    printf("Queue Underflow\n");
  else if(f==r){
    printf("The deleted element is %d ",q[f]);
    f=r=-1; 
  }
  else{
    printf("Element deleted is %d",q[f]);
    f=(f+1)%max;
  } 
}
int display(){
  int i=f;
  if(f==-1 && r==-1){
    printf("The Queue is empty\n");
  }
  else{
    while(i<=r){
      printf("%d ",q[i]);
      i=(i+1)%max;
    }
  }
}
int main(){
  int ch,x;
  while(1){
    printf("1.Insert \n 2.Delete \n 3.Display \n 4.Exit \n");
    printf("Enter your choice: ");
    scanf("%d",&ch);
    switch(ch){
      case 1: printf("Enter the element to be inserted: ");
              scanf("%d",&x);
              insert(x);
              break;
      case 2: delete();
              break;
      case 3: display();
              break;
      case 4: exit(1);
              break;
      default: printf("Invalid entry");                                    
    }
  }
}