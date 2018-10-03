all: mystruct.o structdriver.o
	gcc -o structdriver mystruct.o structdriver.o

mystruct.o: mystruct.c mystruct.h
	gcc -c mystruct.c

structdriver.o: structdriver.c mystruct.h
	gcc -c structdriver.c

run:
	./structdriver

clean:
	rm *.o
