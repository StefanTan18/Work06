#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

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
  printf("Student %s has a grade of %d out of 100.\n", s.name, s.grd);
}

void changename(struct sgrade *s, char *n){
  strncpy(s->name, n, 8);
}

void changegrade(struct sgrade *s, int g){
  s->grd = g;
}

