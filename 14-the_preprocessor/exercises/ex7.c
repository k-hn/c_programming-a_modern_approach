#include <stdio.h>

#define GENERIC_MAX(type)\
  type type##_max(type x, type y)\
  {\
    return x > y ? x : y;\
  }

/* a */
// long long_max(long x, long y)
// {
//   return x > y ? x : y;
// }

/* b */
// unsigned long would not work because it would require two words which would fail to create
// the correct macro function.

/* c */
// typedef unsigned long UNSIGNED_LONG
// GENERIC_MAX(UNSIGNED_LONG)
