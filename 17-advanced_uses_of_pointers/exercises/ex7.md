The approach provided in the question causes a segmentation fault. At the point of the statement
`free(p)`, `p` becomes a dangling pointer and so `p->next` loses its meaning and doesn't 
accomplish what it appears to be doing.

A better approach would be to acquire the next node before freeing the current node as
described below:

```c
  struct node *ptr = first;
  while(first != NULL) {
    ptr = first;
    first = first->next;
    free(ptr);
  }
```
