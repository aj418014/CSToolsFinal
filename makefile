test: catchTest.cpp
	g++ -o test catchTest.cpp
doc: count
	doxygen count
count: main.o
	g++ -o count main.o
main.o: main.cc
	g++ -c main.cc
