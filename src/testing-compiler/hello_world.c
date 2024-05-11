#include <stdio.h>

void helloPrint(int nTimes){
  int count = 0;
  while(nTimes>count){
    puts("Hello, world!");
    count++;
  }
}

int main(int argc, char** argv) {

//  for(int i=0; i<5; i++){
//    puts("Hello, world!");
//  }
  helloPrint(5);
  return 0;
}
