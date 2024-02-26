#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define NAME_LEN 25

struct part {
  int number;
  char name[NAME_LEN+1];
  int on_hand;
};

struct person_name {
  char first[NAME_LEN + 1];
  char middle_initial;
  char last[NAME_LEN + 1];
};

struct student {
  struct person_name name;
  int id, age;
  char sex;
};

void print_part(struct part p);
struct part build_part(int number, const char *name, int on_hand);
void print_student(struct student s);

int main(void) {

  struct part part1 = build_part(528, "Disk drive", 10);
  struct part part2 = build_part(914, "Printer cable", 5);
  
  print_part(part1);
  print_part(part2);
  print_part((struct part) {12, "Hil", 12});

  struct student student1 = {
    .name = {
      .first = "Hilary",
      .middle_initial = 'N',
      .last = "Kodji"
    },
    .id = 12,
    .age = 31,
    .sex = 'M'
  };

  print_student(student1);
  
  return EXIT_SUCCESS;
}

void print_student(struct student s) {
  printf("Name: %s %c. %s\n", s.name.first, s.name.middle_initial, s.name.last);
  printf("ID: %d\n", s.id);
  printf("Age: %d\n", s.age);
  printf("Sex: %c\n", s.sex);
}

void print_part(struct part p) {
  printf("Part number: %d\n", p.number);
  printf("Part name: %s\n", p.name);
  printf("Quantity on hand: %d\n", p.on_hand);
  
}

struct part build_part(int number, const char *name, int on_hand) {
  struct part p;

  p.number = number;
  strcpy(p.name, name);
  p.on_hand = on_hand;

  return p;
}
