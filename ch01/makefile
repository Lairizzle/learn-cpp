# Define variables
CXX = g++
CXXFLAGS = -ggdb -pedantic-errors -Wall -Weffc++ -Wextra -Wconversion -Wsign-conversion -std=c++20

# Define target executable
TARGET = myprogram

# Define object files
OBJS = main.o foo.o bar.o

# Rule to build the executable
$(TARGET): $(OBJS)
    $(CXX) $(CXXFLAGS) -o $@ $^

# Rule to build individual object files
%.o: %.cpp
    $(CXX) $(CXXFLAGS) -c -o $@ $<

# Clean target
clean:
    rm -f $(TARGET) $(OBJS)
