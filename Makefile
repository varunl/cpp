all: main

main: main.cc stack.o
	g++ main.cc stack.o

stack.o: stack.cc
	g++ -c stack.cc

clean:
	rm -rf *.o main
