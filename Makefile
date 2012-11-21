CXX_FLAGS =-g -ansi -Wall -Wold-style-cast -Woverloaded-virtual
CXX = g++ $(CXX_FLAGS)

all:
	$(CXX) src/test_*.cpp src/class/*.cpp -o bin/test.sh

clean:
	rm bin/*.sh