shortfuse : shortfuse.o
	gcc -g -o shortfuse shortfuse.o `pkg-config fuse --libs`

shortfuse.o : shortfuse.cpp shortfuse.h
	gcc -g -Wall `pkg-config fuse --cflags` -c shortfuse.cpp

clean:
	rm -f shortfuse *.o
