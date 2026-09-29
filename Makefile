CXX = g++
CXXFLAGS = -Wall -std=c++17

TARGET = main

OBJS = main.o mathfuncs.o randfuncs.o

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJS)

main.o: main.cpp mathfuncs.h randfuncs.h
	$(CXX) $(CXXFLAGS) -c main.cpp

mathfuncs.o: mathfuncs.cpp mathfuncs.h
	$(CXX) $(CXXFLAGS) -c mathfuncs.cpp

randfuncs.o: randfuncs.cpp randfuncs.h
	$(CXX) $(CXXFLAGS) -c randfuncs.cpp

clean:
	rm -f $(OBJS) $(TARGET)