struct sgrade{char name[8]; int grd;};

struct sgrade makestruct();

void printstruct(struct sgrade s);

void changename(struct sgrade *s, char *n);

void changegrade(struct sgrade *s, int g);
