/* Calculates a broker's commission */

#include <stdio.h>
#include <stdlib.h>

float get_broker_commission(int num_of_shares, float price_per_share) {
  float commission, value;

  value = num_of_shares * price_per_share;

  if (value < 2500.00f) {
    commission = 30.00f + 0.017f * value;
  } else if (value < 6250.00f) {
    commission = 56.00f + 0.0066 * value;
  } else if (value < 20000.00f) {
    commission = 76.00f + 0.0034f * value;
  } else if (value < 50000.00f) {
    commission = 100.00f + 0.0022f * value;
  } else if (value < 500000.00f) {
    commission = 155.00f + 0.0011f * value;
  } else {
    commission = 255.00f + 0.0009f * value;
  }

  if (commission < 39.00f) {
    commission = 39.00f;
  }

  return commission;
}

float get_rival_commission(int num_of_shares) {
  float commission;

  if (num_of_shares < 2000) {
    commission = 33.00f + (0.03 * num_of_shares);
  } else {
    commission = 33.00f + (0.02 * num_of_shares);
  }

  return commission;
}

int main(void) {
  float commission, value, rival_commission;
  int num_of_shares;
  float price_per_share;

  printf("Enter number of shares: ");
  scanf("%d", &num_of_shares);
  printf("Enter price per share: ");
  scanf("%f", &price_per_share);

  commission = get_broker_commission(num_of_shares, price_per_share);
  rival_commission = get_rival_commission(num_of_shares);

  printf("Commission: %.2f\n", commission);
  printf("Rival commission: %.2f\n", rival_commission);
  
  return EXIT_SUCCESS;
}
