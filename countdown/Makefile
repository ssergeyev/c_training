CC=gcc
CFLAGS=-c -Wall
LDFLAGS=
SOURCES=countdown
OBJECTS=$(SOURCES:.cpp=.o)
EXECUTABLE=countdown.exe

all: $(SOURCES) $(EXECUTABLE)

$(EXECUTABLE): $(OBJECTS)
	$(CC) $(LDFLAGS) $(OBJECTS) -o $@

.cpp.o:
	$(CC) $(CFLAGS) $< -o $@
