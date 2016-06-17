#include <stdio.h>
#include <stdlib.h>

int global;

int main()
{
    times_called();
    int local = 5;
    void *p = malloc(128);
    void *k = malloc(128);

    printf ("Address of main is %p\n", main);
    printf ("Address of global is %p\n", &global);
    printf ("Address of local is %p\n", &local);
    printf ("Address of p is %p\n", p);
    printf ("Address of k is %p\n", k);
}

int times_called()
{
  static int counter = 0;
  counter++;
  printf ("Address of counter is %p\n", &counter);
  return counter;
}

// Address of counter is 0x10baf5020
// Address of main is 0x108c7de60
// Address of global is 0x108c7e020
// Address of local is 0x7fff56f8265c
// Address of p is 0x7fd2e0c03470
// Address of k is 0x7fd2e0c034f0
