// Implementing Structure to add student details
#include <stdio.h>
#include <string.h>

struct student
{
  char USN[10];
  char name[30];
  struct marks
  {
    int s1;
    int s2;
    int s3;
  } m;
} s;

int main()
{
  printf("Enter the student details\n");
  printf("USN: \n");
  scanf("%s", &s.USN);
  printf("Name: \n");
  scanf("%s", &s.name);
  printf("Marks in sub1: \n");
  scanf("%d", &s.m.s1);
  printf("Marks in sub2: \n");
  scanf("%d", &s.m.s2);
  printf("Marks in sub3: \n");
  scanf("%d", &s.m.s3);

  printf("The details of the student is: \n");
  printf("USN\t Name\t Sub1\t sub2\t sub3\t \n");
  printf("%s\t %s\t %d\t %d\t %d\t \n", s.USN, s.name, s.m.s1, s.m.s2, s.m.s3);
  return 0;
}