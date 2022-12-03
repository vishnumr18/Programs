#include<stdio.h>
#include<string.h>
int main(){
  int flag=0,i;
  char s1[40];
  char s2[30];
  printf("enter the first string: \n");
  gets(s1);
  printf("enter the second string: \n");
  gets(s2);
  for(i=0;s1[i]!='\0' || s2[i]!='\0';i++){
    if(s1[i]!=s2[i]){
      flag= 1;
      break;
    }
  }
  if(flag == 1)
  printf("The strings are not same ");
  else
  printf("The strings are same");
  return 0;
}