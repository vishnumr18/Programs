#include<stdio.h>
#include<string.h>
int pattern_matching(char ms[],char cs[]){
  printf("the main string is");
  puts(ms);
  printf("the pattern is ");
  puts(cs);
  int s= strlen(ms),p=strlen(cs),max,i,j,flag=1;
  max= s-p+1;
  for(i=0;i<max;i++){
    
    for(j=0;j<p && flag==1;j++){
      if(cs[j]!=ms[j+i-1]){
        flag = -1;
      }
    }

  }
  
}

int main(){
  char ts[20],cs[20];
  int pos;
  printf("Enter the string:\n ");
  gets(ts);
  printf("Enter the Pattern to be searched:\n");
  gets(cs);
  pos=pattern_matching(ts,cs);
  if(pos== -1){
    printf("The Pattern is not matching!!");
  }
  else{
    printf("The Pattern is matching at %d position",pos);
  }
}