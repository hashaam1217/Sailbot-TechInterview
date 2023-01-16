CC = g++
CFLAGS = -Wall

all:
	$(CC) *.cpp cutest/CuTest.c $(CFLAGS) -o test_standard_calc.o

clean:
	rm -f *.o

#Attempted to modify makefile to run googletests. 
#

#CC = g++
#CFLAGS = -Wall
#
#GTEST_DIR = ./googletest/googletest
#
#GTEST_HEADERS = $(GTEST_DIR)/include/gtest/*.h \
#                $(GTEST_DIR)/include/gtest/internal/*.h
#GTEST_SRCS = $(GTEST_DIR)/src/gtest-all.cc
#
#all:
#
#	$(CC) -isystem $(GTEST_DIR)/include -I$(GTEST_DIR) $(CFLAGS) -c $(GTEST_SRCS) -o gtest.o
#	$(CC) -isystem $(GTEST_DIR)/include -I$(GTEST_DIR) $(CFLAGS) -c test_standard_calc.cpp -o test_standard_calc.o
#	$(CC) -isystem $(GTEST_DIR)/include -I$(GTEST_DIR) $(CFLAGS) -c standard_calc.cpp -o standard_calc.o
#	$(CC) gtest.o standard_calc.o test_standard_calc.o -o test_standard_calc
#	
#
#clean:
#	rm -f *.o test_standard_calc
#