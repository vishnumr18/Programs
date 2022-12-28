#include<stdio.h>
struct polynomial
{
  int coef,pow;
}poli[50];

int main(){
  int n,m,i;
  printf("Enter the degree of the first polinomial\n");
  scanf("%d",&n);
  printf("Enter the co-efficient and power of the polinomial\n");
  for(i=0;i<n;i++){
    scanf("%d %d",&poli[i].coef,&poli[i].pow);
  }
  printf("Enter the degree of the second polinomial\n");
  scanf("%d",&m);
  printf("Enter the co-efficient and power of the second polinomial\n");
  for(i=0;i<m;i++){
    scanf("%d %d",&poli[i].coef,&poli[i].pow);
  }
  
  printf("The first polinomial is\n");
  for(i=0;i<n;i++){
    printf("%dx^%d + ",poli[i].coef,poli[i].pow);
  }
  
  printf("\nThe second polinomial is\n");
  for(i=0;i<m;i++){
    printf("%dx^%d + ",poli[i].coef,poli[i].pow);
  }

}