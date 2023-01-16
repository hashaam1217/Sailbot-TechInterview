CC = g++
CFLAGS = -Wall

all:
	#$(CC) *.cpp cutest/CuTest.c $(CFLAGS) -o test_standard_calc.o

	$(CC) -I./googletest/include -L./googletest/lib *.cpp -lgtest -lgtest_main 
	$(CFLAGS) -o test_standard_calc.o

clean:
	rm -f *.o
