#include <stdio.h>

int main(void) {
  float radius = 10.0f;
  float pi = 3.14159265f;
  float volume = 4.0f/3.0f * pi * radius * radius * radius;

  printf("volume: %f\n", volume);
  
  return 0;
}
