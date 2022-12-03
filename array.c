#include<stdio.h>

int arrayInsertion(int lnt, int a[],int in,int loc){
  int i;
  for(i=lnt;i>=loc;i--){
    a[i]= a[i-1];
  }
  a[loc-1]=in;
  lnt++;

  printf("The updated array after insertion is:\n");
  for(i=0;i<lnt;i++){
    printf("%d ",a[i]);
  } 
}

int main(){
  int i,pos,elmt,n,a[50],add;
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
  add = arrayInsertion(n,a,elmt,pos);
  
}


