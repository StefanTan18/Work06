#include <stdio.h>
#include <stdlib.h>

#include "mystruct.h"

int main() {
  struct sgrade foo;
  foo = makestruct();

  printstruct(foo);

  changestruct(foo);
  printstruct(foo);

}
