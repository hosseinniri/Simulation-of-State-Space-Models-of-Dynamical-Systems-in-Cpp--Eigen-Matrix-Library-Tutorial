# Makefile for C++ program 

# Compiler and flags 

CXX = g++
# change this path with your preferences and directory
CXXFLAGS =  -I  C:\Users\dehghan.KCRND\Desktop\Simulation\git\Simulation-of-State-Space-Models-of-Dynamical-Systems-in-Cpp--Eigen-Matrix-Library-Tutorial\eigen\
# Target and dependencies 
TARGET = simulator
OBJS = main.o SimulateSystem.o
# Build and run 
all: $(TARGET)
# ./$(TARGET)

$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $@ $^

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c -o $@ $< 
# Cleanup 
clean:
	rm -f $(TARGET) $(OBJS)