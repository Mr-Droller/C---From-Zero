#include <stdio.h>

int main() {
  int myNumbers[] = {10, 25, 50, 75, 100};
  int length = sizeof(myNumbers) / sizeof(myNumbers[0]);
  int i, average;
  int sum = 0;
  for(i=0;i<length;i++){
  	sum = sum + myNumbers[i];
  }
  
  average = sum / length;
  
  printf("%d", average);
  
  return 0;
}
