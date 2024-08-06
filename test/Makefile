CXX = g++
CXXFLAGS = -std=c++17 -Iinclude -I/usr/local/include/eigen3
SOURCES = test/robot_test.cpp src/robot.cpp src/kinematics.cpp src/dynamics.cpp src/path_planning.cpp src/control.cpp src/matrix.cpp src/utils.cpp src/visualization.cpp src/collision_detection.cpp
OBJECTS = $(SOURCES:.cpp=.o)
EXECUTABLE = test_executable

all: $(EXECUTABLE)

$(EXECUTABLE): $(OBJECTS)
	$(CXX) $(CXXFLAGS) -o $@ $^

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c -o $@ $<

clean:
	rm -f $(OBJECTS) $(EXECUTABLE)