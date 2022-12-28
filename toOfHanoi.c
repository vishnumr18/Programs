#include<stdio.h>

int tower(int n,char s,char h,char d){
  if(n==1){
    printf("Move the disc from %c to %c\n",s,d);
  }
  else{
    tower(n-1,s,d,h);
    printf("The disc %d is moved from %c to %c\n",n,s,d);
    tower(n-1,h,s,d);
  }
}
int main(){
  int n;
  printf("Enter the number of discs: ");
  scanf("%d",&n);
  tower(n,'A','B','C');
}