CC=gcc
CFLAGS=-c -Wall -Wextra -Werror -std=c11
LDFLAGS=
SOURCES=graph.c plot.c deque.c stack.c parse_str.c calculate.c
OBJECTS=$(SOURCES:.c=.o)
EXECUTABLE=../build/graph

all: $(SOURCES) $(EXECUTABLE)

$(EXECUTABLE): $(OBJECTS)
	$(CC) $(LDFLAGS) $(OBJECTS) -o $@

.c.o:
	$(CC) $(CFLAGS) $< -o $@

cleanexe:
	rm -rf $(EXECUTABLE)
	
clean:
	rm -rf $(OBJECTS)
	make cleanexe


rebuild: cleanexe all

# all:
# 	$(CC) $(CFLAGS) $(SOURCES) -o $(EXECUTABLE)