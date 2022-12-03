#include<stdio.h>
#include<string.h>
int main(){
  int cnt=0,i=0;
  char s[30];
  printf("Enter the string: \n");
  gets(s);
  while(s[i] != '\0'){
    cnt++;
    i++;
  }
  printf("The length of the string is %d",cnt);
  return 0;
}