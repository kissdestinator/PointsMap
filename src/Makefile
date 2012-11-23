CXX_FLAGS =-g -ansi -Wall -Wold-style-cast -Woverloaded-virtual
CXX = g++ $(CXX_FLAGS)

all: Point Destination Road Map Reader

Point:
	$(CXX) tests/test_Point.cpp class/Point.cpp -o ../bin/test_Point.sh

Destination: Point
	$(CXX) tests/test_Destination.cpp class/Destination.cpp -o ../bin/test_Destination.sh

Road: Destination
	$(CXX) tests/test_Road.cpp class/Road.cpp -o ../bin/test_Road.sh

Map: Road
	$(CXX) tests/test_Map.cpp class/Map.cpp -o ../bin/test_Map.sh

Reader: Map
	$(CXX) tests/test_Reader.cpp class/Reader.cpp -o ../bin/test_Reader.sh

clean:
	rm -f ../bin/*.sh class/*~ test/test_*~ *out *~