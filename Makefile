CXX_FLAGS =-g -ansi -Wall -Wold-style-cast -Woverloaded-virtual
CXX = g++ $(CXX_FLAGS)

all:
	$(CXX) src/main.cpp -o bin/hello
