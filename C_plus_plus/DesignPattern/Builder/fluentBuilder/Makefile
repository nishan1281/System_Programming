# Define compiler and flags
CXX = g++
CXXFLAGS = -std=c++17 -Wall

# Define the source files and the output
SOURCES = main.cpp
OBJECTS = $(SOURCES:.cpp=.o)
EXEC = fluentBuilder

# Build the project
$(EXEC): $(OBJECTS)
	$(CXX) $(OBJECTS) -o $(EXEC)

# Compile .cpp files into .o object files
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Clean build files
clean:
	rm -f $(OBJECTS) $(EXEC)
