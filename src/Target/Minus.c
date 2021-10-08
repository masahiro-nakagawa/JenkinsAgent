#include "Minus.h"

unsigned int Minus(int data1, int data2, int* ans){
  int min =-100;
  *ans = data1 - data2;
  if((min >= data1) ||(min >= data2) || (min >= *ans)){
    return 1;
  }
  return 0;
}
