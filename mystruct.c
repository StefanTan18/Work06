#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "mystruct.h"


struct sgrade makestruct(){
  struct sgrade temp;
  srand( time(NULL) );
  for (int i = 0; i < 8; i++){
    temp.name[i] = 'A' + (rand() % 26);
  }
  temp.grd = rand() % 100;
  return temp;
}

void printstruct(struct sgrade s){
  printf("%s has grade %d\n", s.name, s.grd);
}

void changestruct(struct sgrade s){
  s.grd++;
//s.name = strncpy(name, newname, 8)
}

