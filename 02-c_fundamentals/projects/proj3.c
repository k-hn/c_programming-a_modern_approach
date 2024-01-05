#include <stdio.h>

int main(void) {
  float pi = 3.14159265f;
  float radius;
  printf("Radius: ");
  scanf("%f", &radius);
  
  float volume = 4.0f/3.0f * pi * radius * radius * radius;

  printf("volume: %f\n", volume);
  
  return 0;
}
