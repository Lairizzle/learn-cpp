CC = /usr/bin/c++
INCLUDES = -I/home/keith/cppincludes/plog-master/include 
FLAGS = ${INCLUDES} -pedantic-errors -Wall -Wextra -Wconversion -Wsign-conversion -Werror

# Source Files and Objects
SRCS = $(wildcard *.cpp)
# List of object files
OBJS = $(SRCS:.cpp=.o)

# Default target
all: program

# Rule to link object files into the executable
program: $(OBJS)
	$(CC) $(FLAGS) -o $@ $^

# Rule to compile .cpp files into .o files
%.o: %.cpp
	$(CC) $(FLAGS) -c $^ -o $@

# Clean rule to remove generated files
clean:
	rm -f $(OBJS) program

