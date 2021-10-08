#include <stdio.h>
#include "Calc.h"

int main(){
  int data1, data2, operator;
  int ans;

  printf("Enter first Number");
  scanf("%d",&data1);
  printf("\nEnter second Number");
  scanf("%d", &data2);
  printf("\n,Enter operation: 1: add 2:sub 3:div 4:mult");
  scanf("%d",  &operator);

  switch(operator)
  {
    case 1:
      Add(data1, data2, &ans);
      printf("%d + %d = ",data1, data2);
      break;
    case 2:
      Minus(data1, data2, &ans);
     printf("%d- %d = ",data1, data2); 
      break;
    case 3:
      Div(data1, data2, &ans);
      printf("%d / %d = ",data1,data2);
      break;
    case 4:
      Mult(data1, data2, &ans);
      printf("%d * %d = ",data1, data2);
  }

  printf("%d", ans);
  return 0;
}


