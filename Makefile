CC = /usr/bin/c++
INCLUDES =  
bags = ${INCLUDES} -pedantic-errors -Wall -Wextra -Wconversion -Wsign-conversion -Werror

# Source Files and Objects
SRCS = $(wildcard *.cpp)
# List of object files
OBJS = $(SRCS:.cpp=.o)

# Default target
all: program

# Rule to link object files into the executable
program: $(OBJS)
	$(CC) $(bags) -o $@ $^

# Rule to compile .cpp files into .o files
%.o: %.cpp
	$(CC) $(bags) -c $^ -o $@

# Clean rule to remove generated files
clean:
	rm -f $(OBJS) program

