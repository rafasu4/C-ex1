CC = gcc
AR = ar
mymathd = libmymath.so
mymaths = libmyMath.a
FLAGS = -Wall -g

all: maind mains

#dynamic exe
maind: power.o basicMath.o main.o mymathd
	$(CC) $(FLAGS) -o maind main.o power.o basicMath.o ./mymathd

#static exe
mains: power.o basicMath.o main.o mymaths
	$(CC) $(FLAGS) -o mains main.o power.o basicMath.o mymaths
	
#creating dynamic library
mymathd: power.o basicMath.o
	$(CC) -shared -o mymathd power.o basicMath.o
	
#creating static library
mymaths: power.o basicMath.o
	$(AR) -rcs mymaths power.o basicMath.o	 	
	
power.o: power.c myMath.h
	$(CC) $(FLAGS) -c power.c

basicMath.o: basicMath.c myMath.h	
	$(CC) $(FLAGS) -c basicMath.c

main.o: main.c myMath.h
	$(CC) $(FLAGS) -c main.c

.PHONY: clean all

clean:
	rm -f *.o *.so *.a maind mains mymathd mymaths		
