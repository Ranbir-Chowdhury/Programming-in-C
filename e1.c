#include <stdio.h> 

struct student{
  int roll_no;
  char name[80];
  float fees;
  char DOB[80];
};

int main(){
  struct student s1;
  printf("Enter the student's roll number: ");
  scanf("%d",&s1.roll_no);
  printf("Enter the student's name: ");
  scanf("%s", s1.name);
  printf("Enter the student's fees: ");
  scanf("%f", &s1.fees);
  printf("Enter the student's DOB: ");
  scanf("%s", s1.DOB);
  printf("\n ******************* STUDENT'S DETAILS *********************");
  printf("\n ROLL NO. = %d", s1.roll_no);
  printf("\n NAME = %s", s1.name);
  printf("\n FEES = %f", s1.fees);
  printf("\n DOB = %s\n", s1.DOB);

  return 0;
}