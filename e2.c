#include <stdio.h> 

struct numbers{
  int a,b,c;
  int largest;
};

int main(){
  struct numbers n1;
  printf("\n Enter the three numbers: ");
  scanf("%d %d %d", &n1.a, &n1.b, &n1.c);
  if(n1.a > n1.b && n1.a > n1.c){
    n1.largest = n1.a;
  }
  if(n1.b > n1.a && n1.b > n1.c){
    n1.largest = n1.b;
  }
  if (n1.c > n1.a && n1.c > n1.b){
    n1.largest = n1.c;
  }
  printf("\n The largest number is: %d\n", n1.largest);
  return 0;
}