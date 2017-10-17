all: *.cpp
	g++ -std=c++11 *.cpp -o sort
run:
	make all
	./sort 9 2 43 2 1 29 24