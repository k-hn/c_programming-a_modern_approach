/* Maintains a parts database (array version) */

#include <stdio.h>
#include <stdlib.h>
#include "readline.h"

#define NAME_LEN 25
#define MAX_PARTS 100

struct part {
  int number;
  char name[NAME_LEN + 1];
  int on_hand;
};

int find_part(struct part inventory[], int num_parts, int number);
int insert(struct part inventory[], int num_parts);
void search(struct part inventory[], int num_parts);
void update(struct part inventory[], int num_parts);
void print(struct part inventory[], int num_parts);

/**
 * main: Prompts the user to enter an operation code,
 *       then calls a function to perform the requested
 *       action. Repeats until the user enters the
 *       command 'q'. Prints and error message if the user
 *       enters an illegal code.
 */
int main(void)
{
  char code;  
  struct part inventory[MAX_PARTS];
  int num_parts = 0;		/* number of parts currently stored */


  for (;;) {
    printf("Enter operation code: ");
    scanf(" %c", &code);
    while (getchar() != '\n') {}	/* skips to end of line */

    switch(code) {
    case 'i':
      num_parts = insert(inventory, num_parts);
      break;
    case 's':
      search(inventory, num_parts);
      break;
    case 'u':
      update(inventory, num_parts);
      break;
    case 'p':
      print(inventory, num_parts);
      break;
    case 'q':
      return EXIT_SUCCESS;
    default:
      printf("Illegal code.\n");
    }
    printf("\n");
  }
}

/**
 * find_part: Looks up a part number in the inventory
 *            array. Returns the array index if the part
 *            number is found; otherwise, return -1.
 */
int find_part(struct part inventory[MAX_PARTS], int num_parts, int number)
{
  for (int i = 0; i < num_parts; i++) {
    if (inventory[i].number == number) {
      return i;
    }
  }
  return -1;
}

/**
 * insert: Promps the user for information about a new
 *         part and then insert the part into the
 *         database and returns an incremented number of parts.
 *         Prints an error message and returns
 *         the unmodified number of parts
 *         if the part already exists or the
 *         database is full.
 */
int insert(struct part inventory[MAX_PARTS], int num_parts)
{
  int part_number;

  if (num_parts == MAX_PARTS) {
    printf("Database is full; can't add more parts.\n");
    return num_parts;
  }

  printf("Enter part number: ");
  scanf("%d", &part_number);

  if (find_part(inventory, num_parts, part_number) >= 0) {
    printf("Part already exists.\n");
    return num_parts;
  }

  inventory[num_parts].number = part_number;
  printf("Enter part name: ");
  read_line(inventory[num_parts].name, NAME_LEN);
  printf("Enter quantity on hand: ");
  scanf("%d", &inventory[num_parts].on_hand);
  num_parts++;

  return num_parts;
}

/**
 * search: Prompts the user to enter a part number, then
 *         looks up the part in the database. If the part
 *         exists, prints the name and quantity on hand;
 *         if not, prints an error message.
 */
void search(struct part inventory[MAX_PARTS], int num_parts)
{
  int i, number;

  printf("Enter part number: ");
  scanf("%d", &number);
  i = find_part(inventory, num_parts, number);	/* returns index of part */

  if (i >= 0) {
    printf("Part name: %s\n", inventory[i].name);
    printf("Quantity on hand: %d\n", inventory[i].on_hand);
  } else {
    printf("Part not found.\n");
  }
}

/**
 * update: Prompts the user to enter a part number.
 *         Prints an error message if the part doesn't
 *         exist; otherwise, prompts the user to enter
 *         change in quantity on ahdn and updates the
 *         database.
 */
void update(struct part inventory[MAX_PARTS], int num_parts)
{
  int i, number, change;

  printf("Enter part number: ");
  scanf("%d", &number);
  i = find_part(inventory, num_parts, number);

  if (i >= 0) {
    printf("Enter change in quantity on hand: ");
    scanf("%d", &change);
    inventory[i].on_hand += change;
  } else {
    printf("Part not found");
  }
}

/**
 * print: Prints alisting of all parts in the database,
 *        showing the part number, part name, and
 *        quantity on hand. Parts are printed in the
 *        order in which they were entered into the
 *        database.
 */
void print(struct part inventory[MAX_PARTS], int num_parts)
{
  int i;
  printf("Part Number Part Name                    "
	 "Quantity on Hand\n");
  for (i = 0; i < num_parts; i++)
    printf("%7d       %-25s%11d\n", inventory[i].number,
	   inventory[i].name, inventory[i].on_hand);
}
