#include<stdio.h>
#include<stdlib.h>
int main(){
  int i,n;
  int *ptr;
  printf("Enter the size of the array:\n");
  scanf("%d",&n);
  ptr=(int*)malloc(sizeof(int)*n);
  if(ptr == NULL){
    printf("Unduccful try");
  }
  printf("Enter the elements of the array:\n");
  for(i=0;i<n;i++){
    scanf("%d",ptr+i);
  }
  printf("Given elements are:\n");
  for(i=0;i<n;i++){
    printf("%d",*(ptr+i));
  }
}