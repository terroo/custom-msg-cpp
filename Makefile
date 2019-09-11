TARGET=msg
CC=clang++
DEBUG=-g
OPT=-O0
CCFLAGS=$(DEBUG) $(OPT) -pipe
LD=clang++
OBJS= main.o helloworld.o
all: $(OBJS)
	$(LD) -o $(TARGET) $(OBJS)
 
main.o: main.cpp
	$(CC) -c $(CCFLAGS) main.cpp -o main.o
 
helloworld.o: hello-world.cpp
	$(CC) -c $(CCFLAGS) hello-world.cpp  -o helloworld.o
 
clean:
	rm -f *.o
