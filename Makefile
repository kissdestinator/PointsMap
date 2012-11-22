CXX_FLAGS =-g -ansi -Wall -Wold-style-cast -Woverloaded-virtual
CXX = g++ $(CXX_FLAGS)

csv:
	$(CXX) src/test_*.cpp src/control_csv/*.cpp -o bin/test_csv.sh

angle:
	$(CXX) src/test_angle.cpp src/class/*.cpp -o bin/test_angle.sh	

point:
	$(CXX) src/test_points.cpp src/class/*.cpp -o bin/test_points.sh

clean:
	rm bin/*.sh
