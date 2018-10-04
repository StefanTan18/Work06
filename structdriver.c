#include <stdio.h>
#include <stdlib.h>

#include "mystruct.h"

int main() {
  struct sgrade foo;
  foo = makestruct();

  printf("\nCreated example of struct sgrade{char name[8]; int grd;}...\n");
  printstruct(foo);

  printf("\nTesting modifiers...\n");
  printf("Changing current name to \"DW\"...\n");
  changename(&foo, "DW");
  printstruct(foo);

  printf("\nChanging current grade to 0...\n(failing the student)\n");
  changegrade(&foo, 0);
  printstruct(foo);
}
