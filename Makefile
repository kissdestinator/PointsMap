CXX_FLAGS =-g -ansi -Wall -Wold-style-cast -Woverloaded-virtual
CXX = g++ $(CXX_FLAGS)

all:
	$(CXX) src/test_*.cpp src/class/*.cpp -o bin/test_class.sh
	$(CXX) src/test_*.cpp src/control_csv/*.cpp -o bin/test_csv.sh

csv:
	$(CXX) src/test_*.cpp src/control_csv/*.cpp -o bin/test_csv.sh

class:
	$(CXX) src/test_*.cpp src/class/*.cpp -o bin/test_class.sh

clean:
	rm bin/*.sh