#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "mystruct.h"



struct sgrade{char str[8]; int g;};

struct sgrade makestruct(){
  srand( time(NULL) );
  for (int i = 0; i < 8; i++){
  	
  }
}

void printstruct(struct sgrade s){
	printf("%s has grade %d\n", s.str, s.g);
}

void changestruct(struct sgrade s, char *newname, int newgrd){
}

