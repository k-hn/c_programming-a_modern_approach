#include <stdio.h>

int main(void) {
  float amount;
  float amount_with_tax;
  printf("Enter an amount: ");
  scanf("%f", &amount);

  amount_with_tax = amount * 1.05f;
  /* amount_with_tax = amount + (5.0f/100.0f) * amount; */
  printf("With tax added: $%.2f\n", amount_with_tax);

  return 0;
}
