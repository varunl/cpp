main: main.cc build/stack.o
	g++ main.cc build/stack.o -o build/main

build/stack.o: stack.cc
	mkdir -p build
	g++ -c stack.cc -o build/stack.o

clean:
	rm -rf build
