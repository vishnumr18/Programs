#include<stdio.h>
int main(){
  int a[50],osum=0,esum=0;
  int i ,n;
  printf("Enter the size of the array: ");
  scanf("%d",&n);
  printf("Enter the element of the array: ");
  for(i=0;i<n;i++){
    scanf("%d",&a[i]);
  }

  for(i=0;i<n;i++){
    if(a[i] % 2 == 0){
      esum+= a[i];
    }
    else{
      osum+=a[i];
    }
  }

  printf("The sum of even numbers is: %d \n",esum);
  printf("The sum of odd numbers is: %d \n",osum);
  
  return 0;
}