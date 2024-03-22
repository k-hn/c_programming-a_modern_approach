```c
struct {
  int a;
} x;

printf("(&x)->a: %d\n", (&x)->a);
printf("x.a: %d\n", x.a);
```

`(&x)->a` is equivalent to `*(&x).a`
With respect to returning the value of a, both approaches are equivalent.
