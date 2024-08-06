CXX = g++
EIGEN_DIR = /usr/local/opt/eigen/include/eigen3
CXXFLAGS = -std=c++17 -Iinclude -I$(EIGEN_DIR)
LDFLAGS =
SOURCES = src/main.cpp src/robot.cpp src/kinematics.cpp src/dynamics.cpp src/path_planning.cpp src/control.cpp src/matrix.cpp src/utils.cpp src/visualization.cpp src/collision_detection.cpp
OBJECTS = $(SOURCES:.cpp=.o)
EXECUTABLE = simulator

all: $(EXECUTABLE)

$(EXECUTABLE): $(OBJECTS)
	$(CXX) $(LDFLAGS) -o $@ $^

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c -o $@ $<

clean:
	rm -f $(OBJECTS) $(EXECUTABLE)