#include<stdio.h>
struct student
{
  int rollno;
  char name[20];
  float marks;
};
int main(){
  struct student s[3];
  printf("Enter the details of the student here \n");
  printf("RollNo: \t Name: \t Marks: \t \n");
  for( int i=0;i<3;i++){
    scanf("%d \t %s \t %f \t",&s[i].rollno,&s[i].name,&s[i].marks);
  }
  printf("The details of the student is:\n");
  printf("RollNo: \t Name: \t Marks: \t \n");
  for( int i=0;i<3;i++){
    scanf("%d \t %s \t %f \t",s[i].rollno,s[i].name,s[i].marks);
  }
}