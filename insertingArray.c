#include<stdio.h>
int main(){
  int i,pos,elmt,n,a[50];
  printf("Enter the size of the array:\n");
  scanf("%d",&n);
  printf("Enter the elements of the array:\n");
  for(i=0;i<n;i++){
    scanf("%d",&a[i]);
  }
  printf("Enter the position of the arrey to be inserted:\n");
  scanf("%d",&pos);
  printf("Enter the element to be added:\n");
  scanf("%d",&elmt);

  for(i=n;i>=pos;i--){
    a[i]= a[i-1];
  }
  a[pos-1]=elmt;
  n++;

  printf("The updated array is:\n");
  for(i=0;i<n;i++){
    printf("%d ",a[i]);
  }
  return 0;
}