count: main.o
	g++ -o count main.o
main.o: main.cc
	g++ -c main.cc
