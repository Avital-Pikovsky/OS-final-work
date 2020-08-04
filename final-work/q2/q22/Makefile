CC = gcc
FLAGS = -Wall -g

all: server client


server: server.o
	$(CC) $(FLAGS) -o server server.o 

server.o: server.c 
	$(CC) $(FLAGS) -c server.c 


client: client.o
	$(CC) $(FLAGS) -o client client.o 

client.o: client.c 
	$(CC) $(FLAGS) -c client.c 


.PHONY: clean all

clean:
	rm -f *.o server client
