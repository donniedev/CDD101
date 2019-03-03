
CC=g++
CFLAGS= -std=c++11 -pthread
DEPS =  main.cpp Semaphore.cpp Semaphore.h
OBJ =



ALL: $(DEPS)
	$(CC) main.cpp  Semaphore.cpp -o execFile $(CFLAGS) $(DEBUGFLAGS)

DEBUG: DEBUGFLAGS = -DDEBUG
DEBUG: ALL


#this is customary and just deletes all .o files
CLEAN:
	rm *.o
