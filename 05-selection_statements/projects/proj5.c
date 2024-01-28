#include <stdio.h>
#include <stdlib.h>

float get_tax_payable(float income) {
  float tax;

  if (income <= 750.0f) {
    tax = 0.01f * income;
  } else if (income > 750.0f && income <= 2250.0f) {
    tax = 7.50f + 0.02f * (income - 750.0f);
  } else if (income > 2250.0f && income <= 3750.0f) {
    tax = 37.50f + 0.03f * (income - 2250.0f);
  } else if (income > 3750.0f && income <= 5250.0f) {
    tax = 82.50f + 0.04f * (income - 3750.0f);
  } else if (income > 5250.0f && income <= 7000.0f) {
    tax = 142.50f + 0.05f * (income - 5250.0f);
  } else {
    tax = 230.0f + 0.06f * (income - 7000.0f);
  }

  return tax;
}

int main(void) {
  float income, tax_payable;

  printf("Enter taxable income($): ");
  scanf("%f", &income);

  tax_payable = get_tax_payable(income);
  printf("Tax payable: $%.2f\n", tax_payable);
  
  return EXIT_SUCCESS;
}
