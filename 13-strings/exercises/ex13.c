#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void build_index_url(const char *domain, char *index_url);

int main(void) {
  char domain[50] = "knking.com";
  char index_url[50];
  
  build_index_url(domain, index_url);

  printf("Index: %s\n", index_url);
  
  return EXIT_SUCCESS;
}

void build_index_url(const char *domain, char *index_url) {
  strcpy(index_url,"http://www.");
  strcat(index_url, domain);
  strcat(index_url, "/");
}
