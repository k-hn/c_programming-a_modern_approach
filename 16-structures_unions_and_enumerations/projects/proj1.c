#include <stdio.h>
#include <stdlib.h>

struct dialling_code {
  char *country;
  int code;
};

const struct dialling_code country_codes[] =
  {{"Argentina",            54}, {"Bangladesh",     889},
   {"Brazil",               55}, {"Burma (Myanmar)", 95},
   {"China",                86}, {"Colombia",        57},
   {"Congo, Dem. Rep. of", 243}, {"Egypt",           20},
   {"Ethiopia",            251}, {"France",          33},
   {"Germany",              49}, {"India",           91},
   {"Indonesia",            62}, {"Iran",            98},
   {"Italy",                39}, {"Japan",           81},
   {"Mexico",               52}, {"Nigeria",        234},
   {"Pakistan",             92}, {"Philippines",     63},
   {"Poland",               48}, {"Russia",           7},
   {"South Africa",         27}, {"South Korea",     82},
   {"Spain",                34}, {"Sudan",          249},
   {"Thailand",             66}, {"Turkey",          90},
   {"Ukraine",             380}, {"United Kingdom",  44},
   {"United States",         1}, {"Vietnam",         84}};

/**
 * search: Searches country_codes for a matching code. Returns the name of the country
 *         when found; otherwise returns an error message.
 *         int code -> char *
 */
char *search(int code);

int main(void)
{
  int code;
  printf("Enter a country code: ");
  scanf("%d", &code);

  printf("%s\n", search(code));
  
  return EXIT_SUCCESS;
}

char *search(int code)
{
  int country_codes_len = sizeof(country_codes) / sizeof(country_codes[0]);
  char *result = "Not found";

  for (int i = 0; i < country_codes_len; i++) {
    if (country_codes[i].code == code) {
      result = country_codes[i].country;
      break;
    }
  }

  return result;
}
